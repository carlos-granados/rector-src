<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class NestedTryCatch
{
    public function run()
    {
        try {
            try {
                doSomething();
            } catch (\RuntimeException $e) {
                handleError();
            } catch (\InvalidArgumentException $e) {
                handleError();
            }
        } catch (\Exception $e) {
            logError($e);
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class NestedTryCatch
{
    public function run()
    {
        try {
            try {
                doSomething();
            } catch (\RuntimeException|\InvalidArgumentException $e) {
                handleError();
            }
        } catch (\Exception $e) {
            logError($e);
        }
    }
}

?>
