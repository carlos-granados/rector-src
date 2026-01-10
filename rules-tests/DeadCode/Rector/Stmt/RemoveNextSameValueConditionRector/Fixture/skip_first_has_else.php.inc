<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class SkipFirstHasElse
{
    public function run(array $items)
    {
        $count = 100;
        if ($items === []) {
            $count = 0;
        } else {
            $count = 50;
        }

        if ($items === []) {
            return $count;
        }
    }
}
