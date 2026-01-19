<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class SkipAlreadyMultiException
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException|\InvalidArgumentException $e) {
            handleError($e);
        }
    }
}
