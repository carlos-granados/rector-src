<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class InClosure
{
    public function run()
    {
        $closure = function () {
            try {
                doSomething();
            } catch (\RuntimeException $e) {
                logError($e);
            } catch (\InvalidArgumentException $e) {
                logError($e);
            }
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class InClosure
{
    public function run()
    {
        $closure = function () {
            try {
                doSomething();
            } catch (\RuntimeException|\InvalidArgumentException $e) {
                logError($e);
            }
        };
    }
}

?>
