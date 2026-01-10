<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class SkipSecondHasElseif
{
    public function run(array $items, int $x)
    {
        $count = 100;
        if ($items === []) {
            $count = 0;
        }

        if ($items === []) {
            return $count;
        } elseif ($x > 10) {
            return 200;
        }
    }
}
