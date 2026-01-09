<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

class SkipBooleanAndRightInstanceof
{
    public function go(stdClass $var)
    {
        if ($this->shouldRun() && $var instanceof stdClass) {
            return true;
        }
        return false;
    }

    private function shouldRun(): bool
    {
        return true;
    }
}
