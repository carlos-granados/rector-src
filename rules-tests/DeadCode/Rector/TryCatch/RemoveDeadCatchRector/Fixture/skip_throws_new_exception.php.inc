<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

class SkipThrowsNewException
{
    public function run()
    {
        try {
            // some code
        } catch (\RuntimeException $exception) {
            echo 'error';
        } catch (\Throwable $throwable) {
            throw new \RuntimeException('Wrapped: ' . $throwable->getMessage(), 0, $throwable);
        }
    }
}
