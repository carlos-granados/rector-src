<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

class SkipSingleCatch
{
    public function run()
    {
        try {
            // some code
        } catch (\Exception $exception) {
            throw $exception;
        }
    }
}
