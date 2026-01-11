<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class SkipCatchWithReturn
{
    public function run()
    {
        try {
            $this->doSomething();
        } catch (\Exception $e) {
            return null;
        }
    }
}
