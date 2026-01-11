<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

class SkipNoVariableName
{
    public function run()
    {
        try {
            // some code
        } catch (\RuntimeException $exception) {
            echo 'error';
        } catch (\Throwable) {
            // PHP 8.0+ non-capturing catch
        }
    }
}
