<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class SkipNonCapturingCatch
{
    public function run()
    {
        try {
            $this->doSomething();
        } catch (\Exception) {
            throw new \RuntimeException('Failed');
        }
    }
}
