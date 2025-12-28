<?php

declare(strict_types=1);

namespace Rector\CodeQuality\Rector\LogicalAnd;

use PhpParser\Node;
use PhpParser\Node\Expr\Assign;
use PhpParser\Node\Expr\BinaryOp\LogicalAnd;
use PhpParser\Node\Stmt\Expression;
use Rector\Rector\AbstractRector;
use Symplify\RuleDocGenerator\ValueObject\CodeSample\CodeSample;
use Symplify\RuleDocGenerator\ValueObject\RuleDefinition;

/**
 * @see \Rector\Tests\CodeQuality\Rector\LogicalAnd\AndAssignsToSeparateLinesRector\AndAssignsToSeparateLinesRectorTest
 */
final class AndAssignsToSeparateLinesRector extends AbstractRector
{
    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition('Split 2 assigns with "and" to separate lines', [
            new CodeSample(
                <<<'CODE_SAMPLE'
class SomeClass
{
    public function run()
    {
        $tokens = [];
        $token = 4 and $tokens[] = $token;
    }
}
CODE_SAMPLE
                ,
                <<<'CODE_SAMPLE'
class SomeClass
{
    public function run()
    {
        $tokens = [];
        $token = 4;
        $tokens[] = $token;
    }
}
CODE_SAMPLE
            ),
        ]);
    }

    /**
     * @return array<class-string<Node>>
     */
    public function getNodeTypes(): array
    {
        return [Expression::class];
    }

    /**
     * @param Expression $node
     * @return Expression[]|null
     */
    public function refactor(Node $node): ?array
    {
        if (! $node->expr instanceof LogicalAnd) {
            return null;
        }

        $logicalAnd = $node->expr;

        $expressions = $this->collectAssignExpressions($logicalAnd);

        // Only transform if we have at least 2 assigns
        if (count($expressions) < 2) {
            return null;
        }

        return $expressions;
    }

    /**
     * @return Expression[]
     */
    private function collectAssignExpressions(LogicalAnd $logicalAnd): array
    {
        $expressions = [];

        // Process left side
        if ($logicalAnd->left instanceof LogicalAnd) {
            $expressions = array_merge($expressions, $this->collectAssignExpressions($logicalAnd->left));
        } elseif ($logicalAnd->left instanceof Assign) {
            $expressions[] = new Expression($logicalAnd->left);
        } else {
            // Left side is not an Assign or LogicalAnd, cannot transform
            return [];
        }

        // Process right side
        if ($logicalAnd->right instanceof LogicalAnd) {
            $expressions = array_merge($expressions, $this->collectAssignExpressions($logicalAnd->right));
        } elseif ($logicalAnd->right instanceof Assign) {
            $expressions[] = new Expression($logicalAnd->right);
        } else {
            // Right side is not an Assign or LogicalAnd, cannot transform
            return [];
        }

        return $expressions;
    }
}
