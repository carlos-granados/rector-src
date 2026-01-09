<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveAlwaysTrueIfConditionRector\Fixture;

class SkipIsIntFuncCall
{
    public function run(int $number)
    {
        // Function calls are skipped - side effect potential
        if (is_int($number)) {
            return 'yes';
        }

        return 'no';
    }
}
