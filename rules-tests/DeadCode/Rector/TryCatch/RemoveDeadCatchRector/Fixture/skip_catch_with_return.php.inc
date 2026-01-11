<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

class SkipCatchWithReturn
{
    public function run()
    {
        try {
            // some code
        } catch (\RuntimeException $exception) {
            echo 'error';
        } catch (\Throwable $throwable) {
            return null;
        }
    }
}
