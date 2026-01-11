<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadTryCatchRector\Fixture;

class SkipMultipleCatches
{
    public function run()
    {
        try {
            $this->doSomething();
        } catch (\RuntimeException $e) {
            throw $e;
        } catch (\Exception $e) {
            throw $e;
        }
    }
}
