<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadContinueRector\Fixture;

class SkipVariableContinue
{
    public function run($values, $level)
    {
        for ($i = 1; $i < count($values); ++$i) {
            echo $i;
            continue $level;
        }
    }
}
