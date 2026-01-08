<?php

declare(strict_types=1);

namespace Rector\DeadCode\Rector\For_;

use PhpParser\Node\Expr;
use PhpParser\Node;
use PhpParser\Node\Scalar\Int_;
use PhpParser\Node\Stmt;
use PhpParser\Node\Stmt\Continue_;
use PhpParser\Node\Stmt\Do_;
use PhpParser\Node\Stmt\For_;
use PhpParser\Node\Stmt\Foreach_;
use PhpParser\Node\Stmt\While_;
use Rector\Rector\AbstractRector;
use Symplify\RuleDocGenerator\ValueObject\CodeSample\CodeSample;
use Symplify\RuleDocGenerator\ValueObject\RuleDefinition;

/**
 * @see \Rector\Tests\DeadCode\Rector\For_\RemoveDeadContinueRector\RemoveDeadContinueRectorTest
 */
final class RemoveDeadContinueRector extends AbstractRector
{
    public function getRuleDefinition(): RuleDefinition
    {
        return new RuleDefinition(
            'Remove useless continue at the end of loops',
            [
                new CodeSample(
                    <<<'CODE_SAMPLE'
while ($i < 10) {
    ++$i;
    continue;
}
CODE_SAMPLE
                    ,
                    <<<'CODE_SAMPLE'
while ($i < 10) {
    ++$i;
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
        return [Do_::class, For_::class, Foreach_::class, While_::class];
    }

    /**
     * @param Do_|For_|Foreach_|While_ $node
     */
    public function refactor(Node $node): ?Node
    {
        $modified = false;
        while ($this->canRemoveLastStatement($node->stmts)) {
            array_pop($node->stmts);
            $modified = true;
        }

        return $modified ? $node : null;
    }

    /**
     * @param Stmt[] $stmts
     */
    private function canRemoveLastStatement(array $stmts): bool
    {
        if ($stmts === []) {
            return false;
        }

        $lastKey = array_key_last($stmts);
        $lastStmt = $stmts[$lastKey];

        return $this->isRemovable($lastStmt);
    }

    private function isRemovable(Stmt $stmt): bool
    {
        if (! $stmt instanceof Continue_) {
            return false;
        }

        // If continue has no num, it's `continue;` which is removable at end of loop
        if (!$stmt->num instanceof Expr) {
            return true;
        }

        // If continue has a non-integer num (like a variable), we can't determine
        // if it's safe to remove, so preserve it
        if (! $stmt->num instanceof Int_) {
            return false;
        }

        // Only remove continue 0 and continue 1 (both equivalent to plain continue)
        return $stmt->num->value < 2;
    }
}
