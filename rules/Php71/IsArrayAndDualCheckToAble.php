<?php

declare(strict_types=1);

namespace Rector\Php71;

use PhpParser\Node\Arg;
use PhpParser\Node\Expr;
use PhpParser\Node\Expr\BinaryOp\BooleanOr;
use PhpParser\Node\Expr\FuncCall;
use PhpParser\Node\Expr\Instanceof_;
use PhpParser\Node\Name;
use Rector\NodeManipulator\BinaryOpManipulator;
use Rector\NodeNameResolver\NodeNameResolver;
use Rector\Php71\ValueObject\TwoNodeMatch;
use Rector\PhpParser\Comparing\NodeComparator;

final readonly class IsArrayAndDualCheckToAble
{
    public function __construct(
        private BinaryOpManipulator $binaryOpManipulator,
        private NodeNameResolver $nodeNameResolver,
        private NodeComparator $nodeComparator
    ) {
    }

    public function processBooleanOr(BooleanOr $booleanOr, string $type, string $newMethodName): ?FuncCall
    {
        $twoNodeMatch = $this->binaryOpManipulator->matchFirstAndSecondConditionNode(
            $booleanOr,
            Instanceof_::class,
            FuncCall::class
        );

        if (! $twoNodeMatch instanceof TwoNodeMatch) {
            return null;
        }

        $instanceofExpr = $twoNodeMatch->getFirstExpr();
        assert($instanceofExpr instanceof Instanceof_);

        $funcCallExpr = $twoNodeMatch->getSecondExpr();
        assert($funcCallExpr instanceof FuncCall);

        $instanceOfClass = $instanceofExpr->class;
        if ($instanceOfClass instanceof Expr) {
            return null;
        }

        if ((string) $instanceOfClass !== $type) {
            return null;
        }

        if (! $this->nodeNameResolver->isName($funcCallExpr, 'is_array')) {
            return null;
        }

        if ($funcCallExpr->isFirstClassCallable()) {
            return null;
        }

        if (! isset($funcCallExpr->getArgs()[0])) {
            return null;
        }

        $firstArg = $funcCallExpr->getArgs()[0];

        $firstExprNode = $firstArg->value;
        if (! $this->nodeComparator->areNodesEqual($instanceofExpr->expr, $firstExprNode)) {
            return null;
        }

        // both use same Expr
        return new FuncCall(new Name($newMethodName), [new Arg($firstExprNode)]);
    }
}
