<?php

namespace Rector\Tests\CodeQuality\Rector\Catch_\ThrowWithPreviousExceptionRector\Fixture;

class SkipThrowVariable
{
    public function run()
    {
        try {
            $someCode = 1;
        } catch (Throwable $throwable) {
            $exception = new AnotherException('ups');
            throw $exception;
        }
    }
}
