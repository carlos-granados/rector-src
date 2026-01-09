<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

class SkipBooleanOr
{
    public function go(stdClass $var)
    {
        if ($var instanceof stdClass || $this->shouldRun()) {
            return true;
        }
        return false;
    }

    private function shouldRun(): bool
    {
        return true;
    }
}
