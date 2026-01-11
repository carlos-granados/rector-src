<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

class SkipCatchWithLogging
{
    public function run()
    {
        try {
            // some code
        } catch (\RuntimeException $exception) {
            echo 'error';
        } catch (\Throwable $throwable) {
            error_log($throwable->getMessage());
            throw $throwable;
        }
    }
}
