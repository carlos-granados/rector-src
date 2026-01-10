<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class SkipFirstHasElseif
{
    public function run(array $items, int $x)
    {
        $count = 100;
        if ($items === []) {
            $count = 0;
        } elseif ($x > 10) {
            $count = 50;
        }

        if ($items === []) {
            return $count;
        }
    }
}
