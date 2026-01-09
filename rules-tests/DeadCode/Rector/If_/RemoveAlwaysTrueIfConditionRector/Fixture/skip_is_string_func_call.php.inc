<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveAlwaysTrueIfConditionRector\Fixture;

class SkipIsStringFuncCall
{
    public function run(string $text)
    {
        // Function calls are skipped - side effect potential
        if (is_string($text)) {
            return 'yes';
        }

        return 'no';
    }
}
