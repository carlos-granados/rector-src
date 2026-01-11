<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

class SkipMultiTypeCatch
{
    public function run()
    {
        try {
            // some code
        } catch (\RuntimeException $exception) {
            echo 'error';
        } catch (\InvalidArgumentException|\LogicException $exception) {
            throw $exception;
        }
    }
}
