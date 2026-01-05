<?php

namespace Rector\Tests\DeadCode\Rector\BooleanAnd\RemoveAndTrueRector\Fixture;

class SkipFunctionCalls
{
    public function run()
    {
        // Function calls should not be removed even if they return true
        $result = $this->alwaysTrue() && $x;
        $result2 = isTrue() && $y;
    }

    private function alwaysTrue(): bool
    {
        return true;
    }
}
