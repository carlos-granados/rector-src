<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class SkipMixedType
{
    public function run(mixed $value)
    {
        $result = $value + 0;
        $result2 = $value * 1;
    }
}
