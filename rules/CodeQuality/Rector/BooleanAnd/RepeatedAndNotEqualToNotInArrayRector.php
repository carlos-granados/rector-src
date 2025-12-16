<?php

declare(strict_types=1);

namespace Rector\CodeQuality\Rector\BooleanAnd;

use PhpParser\Node;
use PhpParser\Node\Arg;
use PhpParser\Node\Expr;
use PhpParser\Node\Expr\ArrayDimFetch;
use PhpParser\Node\Expr\BinaryOp\BooleanAnd;
use PhpParser\Node\Expr\BinaryOp\NotEqual;
use PhpParser\Node\Expr\BinaryOp\NotIdentical;
use PhpParser\Node\Expr\BooleanNot;
use PhpParser\Node\Expr\ConstFetch;
use PhpParser\Node\Expr\FuncCall;
use PhpParser\Node\Expr\MethodCall;
use PhpParser\Node\Expr\PropertyFetch;
use PhpParser\Node\Expr\StaticCall;
use PhpParser\Node\Expr\Variable;
use PhpParser\Node\Name;
use Rector\CodeQuality\ValueObject\ComparedExprAndValueExpr;
use Rector\PhpParser\Node\BetterNodeFinder;
use Rector\Rector\AbstractRector;
use Symplify\RuleDocGenerator\ValueObject\CodeSample\CodeSample;
use Symplify\RuleDocGenerator\ValueObject\RuleDefinition;

/**
 * @see \Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\RepeatedAndNotEqualToNotInArrayRectorTest
 */
final class RepeatedAndNotEqualToNotInArrayRector extends AbstractRector
{
    public function __construct(
        private readonly BetterNodeFinder $betterNodeFinder,
    ) {
    }

    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition(
            'Simplify repeated && compare of same value, to ! in_array() call',
            [
                new CodeSample(
                    <<<'CODE_SAMPLE'
if ($value !== 10 && $value !== 20 && $value !== 30) {
    // ...
}

CODE_SAMPLE
                    ,
                    <<<'CODE_SAMPLE'
if (! in_array($value, [10, 20, 30], true)) {
    // ...
}
CODE_SAMPLE
                ),
            ]
        );
    }

    /**
     * @return array<class-string<Node>>
     */
    public function getNodeTypes(): array
    {
        return [BooleanAnd::class];
    }

    /**
     * @param BooleanAnd $node
     */
    public function refactor(Node $node): ?BooleanNot
    {
        if (! $this->isNotEqualOrNotIdentical($node->right)) {
            return null;
        }

        // match compared variable and expr
        if (! $node->left instanceof BooleanAnd && ! $this->isNotEqualOrNotIdentical($node->left)) {
            return null;
        }

        $comparedExprAndValueExprs = $this->matchComparedAndDesiredValues($node);
        if ($comparedExprAndValueExprs === null) {
            return null;
        }

        if (count($comparedExprAndValueExprs) < 3) {
            return null;
        }

        // ensure all compared expr are the same
        $valueExprs = $this->resolveValueExprs($comparedExprAndValueExprs);

        /** @var ComparedExprAndValueExpr $firstComparedExprAndValue */
        $firstComparedExprAndValue = array_pop($comparedExprAndValueExprs);

        // all compared expr must be equal
        foreach ($comparedExprAndValueExprs as $comparedExprAndValueExpr) {
            if (! $this->nodeComparator->areNodesEqual(
                $firstComparedExprAndValue->getComparedExpr(),
                $comparedExprAndValueExpr->getComparedExpr()
            )) {
                return null;
            }
        }

        $array = $this->nodeFactory->createArray($valueExprs);

        $args = $this->nodeFactory->createArgs([$firstComparedExprAndValue->getComparedExpr(), $array]);

        if ($this->isStrictComparison($node)) {
            $args[] = new Arg(new ConstFetch(new Name('true')));
        }

        $inArrayFuncCall = new FuncCall(new Name('in_array'), $args);

        return new BooleanNot($inArrayFuncCall);
    }

    private function isNotEqualOrNotIdentical(Expr $expr): bool
    {
        if ($expr instanceof NotIdentical) {
            return true;
        }

        return $expr instanceof NotEqual;
    }

    private function matchComparedExprAndValueExpr(NotIdentical|NotEqual $expr): ComparedExprAndValueExpr
    {
        // Handle both orders: $var !== 'value' and 'value' !== $var
        // We want the variable/expression on the left, and the comparison value on the right
        if ($this->isComparisonValue($expr->left) && ! $this->isComparisonValue($expr->right)) {
            // Reversed: 'value' !== $var -> normalize to $var, 'value'
            return new ComparedExprAndValueExpr($expr->right, $expr->left);
        }

        // Normal order: $var !== 'value'
        return new ComparedExprAndValueExpr($expr->left, $expr->right);
    }

    /**
     * Check if an expression is a simple comparison value (not a variable or complex expression)
     */
    private function isComparisonValue(Expr $expr): bool
    {
        // Variables and complex expressions are not comparison values
        if ($expr instanceof Variable) {
            return false;
        }

        // Property access, array access, method calls are not comparison values
        // Scalars, constants, arrays are comparison values
        return ! ($expr instanceof PropertyFetch || $expr instanceof ArrayDimFetch || $expr instanceof MethodCall || $expr instanceof StaticCall || $expr instanceof FuncCall);
    }

    /**
     * @param ComparedExprAndValueExpr[] $comparedExprAndValueExprs
     * @return Expr[]
     */
    private function resolveValueExprs(array $comparedExprAndValueExprs): array
    {
        $valueExprs = [];

        foreach ($comparedExprAndValueExprs as $comparedExprAndValueExpr) {
            $valueExprs[] = $comparedExprAndValueExpr->getValueExpr();
        }

        return $valueExprs;
    }

    /**
     * @return null|ComparedExprAndValueExpr[]
     */
    private function matchComparedAndDesiredValues(BooleanAnd $booleanAnd): ?array
    {
        /** @var NotIdentical|NotEqual $rightCompare */
        $rightCompare = $booleanAnd->right;

        // match compared expr and desired value
        $comparedExprAndValueExprs = [$this->matchComparedExprAndValueExpr($rightCompare)];

        $currentBooleanAnd = $booleanAnd;

        while ($currentBooleanAnd->left instanceof BooleanAnd) {
            if (! $this->isNotEqualOrNotIdentical($currentBooleanAnd->left->right)) {
                return null;
            }

            /** @var NotIdentical|NotEqual $leftRight */
            $leftRight = $currentBooleanAnd->left->right;
            $comparedExprAndValueExprs[] = $this->matchComparedExprAndValueExpr($leftRight);
            $currentBooleanAnd = $currentBooleanAnd->left;
        }

        if (! $this->isNotEqualOrNotIdentical($currentBooleanAnd->left)) {
            return null;
        }

        /** @var NotIdentical|NotEqual $leftCompare */
        $leftCompare = $currentBooleanAnd->left;

        $comparedExprAndValueExprs[] = $this->matchComparedExprAndValueExpr($leftCompare);

        // keep original natural order, as left/right goes from bottom up
        return array_reverse($comparedExprAndValueExprs);
    }

    private function isStrictComparison(BooleanAnd $booleanAnd): bool
    {
        $notIdenticals = $this->betterNodeFinder->findInstanceOf($booleanAnd, NotIdentical::class);
        $notEquals = $this->betterNodeFinder->findInstanceOf($booleanAnd, NotEqual::class);

        if ($notIdenticals !== []) {
            // mix not identical and not equals, keep as is
            // @see https://3v4l.org/2SoHZ
            return $notEquals === [];
        }

        return false;
    }
}
