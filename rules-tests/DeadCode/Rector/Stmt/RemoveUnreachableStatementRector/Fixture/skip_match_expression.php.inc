<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class SkipMatchExpression
{
    public function run(int $x)
    {
        $result = match ($x) {
            1 => 'one',
            2 => 'two',
            default => 'other',
        };

        return $result;
    }
}
