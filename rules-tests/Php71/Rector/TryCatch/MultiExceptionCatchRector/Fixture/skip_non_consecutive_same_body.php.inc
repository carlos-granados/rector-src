<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class SkipNonConsecutiveSameBody
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException $e) {
            logError($e);
        } catch (\InvalidArgumentException $e) {
            handleDifferently($e);
        } catch (\LogicException $e) {
            logError($e);
        }
    }
}
