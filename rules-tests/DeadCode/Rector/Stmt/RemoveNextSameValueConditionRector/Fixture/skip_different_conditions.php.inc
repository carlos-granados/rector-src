<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class SkipDifferentConditions
{
    public function run(array $items, array $other)
    {
        $count = 100;
        if ($items === []) {
            $count = 0;
        }

        if ($other === []) {
            return $count;
        }
    }
}
