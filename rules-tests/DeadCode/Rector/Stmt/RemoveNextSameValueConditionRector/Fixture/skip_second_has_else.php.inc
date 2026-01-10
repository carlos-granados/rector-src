<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class SkipSecondHasElse
{
    public function run(array $items)
    {
        $count = 100;
        if ($items === []) {
            $count = 0;
        }

        if ($items === []) {
            return $count;
        } else {
            return 200;
        }
    }
}
