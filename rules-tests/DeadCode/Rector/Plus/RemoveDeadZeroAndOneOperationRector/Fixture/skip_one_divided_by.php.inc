<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class SkipOneDividedBy
{
    public function run(int $value)
    {
        // 1 / $value is NOT $value, should not be touched
        $result = 1 / $value;
    }
}
