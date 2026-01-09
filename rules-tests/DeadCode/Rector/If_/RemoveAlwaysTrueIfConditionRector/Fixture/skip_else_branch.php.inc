<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveAlwaysTrueIfConditionRector\Fixture;

class SkipElseBranch
{
    public function run()
    {
        if (true) {
            return 'yes';
        } else {
            return 'no';
        }
    }
}
