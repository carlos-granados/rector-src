<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveAlwaysTrueIfConditionRector\Fixture;

class SkipIsArrayFuncCall
{
    public function run(array $items)
    {
        // Function calls are skipped - side effect potential
        if (is_array($items)) {
            return 'yes';
        }

        return 'no';
    }
}
