<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveAlwaysTrueIfConditionRector\Fixture;

class SkipElseifBranch
{
    public function run(int $value)
    {
        if (true) {
            return 'yes';
        } elseif ($value > 0) {
            return 'maybe';
        }

        return 'no';
    }
}
