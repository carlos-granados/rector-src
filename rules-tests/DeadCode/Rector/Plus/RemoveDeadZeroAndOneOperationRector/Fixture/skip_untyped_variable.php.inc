<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class SkipUntypedVariable
{
    public function run()
    {
        $value = getSomeValue();
        $result = $value + 0;
    }
}
