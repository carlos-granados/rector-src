<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class SkipMultiplyByZero
{
    public function run(int $value)
    {
        // Multiply by zero changes value, should not be touched
        $result = $value * 0;
        $result2 = 0 * $value;
    }
}
