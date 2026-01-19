<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class SkipSingleCatch
{
    public function run()
    {
        try {
            doSomething();
        } catch (\Exception $e) {
            echo $e->getMessage();
        }
    }
}
