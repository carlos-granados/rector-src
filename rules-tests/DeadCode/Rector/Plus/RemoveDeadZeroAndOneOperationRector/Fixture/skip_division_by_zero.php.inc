<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class SkipDivisionByZero
{
    public function run(int $value)
    {
        // Division by zero should not be touched
        $result = $value / 0;
    }
}
