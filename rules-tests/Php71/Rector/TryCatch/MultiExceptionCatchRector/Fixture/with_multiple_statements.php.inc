<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class WithMultipleStatements
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException $e) {
            logError($e);
            notifyAdmin();
            throw $e;
        } catch (\InvalidArgumentException $e) {
            logError($e);
            notifyAdmin();
            throw $e;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class WithMultipleStatements
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException|\InvalidArgumentException $e) {
            logError($e);
            notifyAdmin();
            throw $e;
        }
    }
}

?>
