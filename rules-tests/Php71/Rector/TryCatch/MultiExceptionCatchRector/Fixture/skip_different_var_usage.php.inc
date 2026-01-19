<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class SkipDifferentVarUsage
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException $e) {
            echo $e->getMessage();
        } catch (\InvalidArgumentException $e) {
            echo $e->getCode();
        }
    }
}
