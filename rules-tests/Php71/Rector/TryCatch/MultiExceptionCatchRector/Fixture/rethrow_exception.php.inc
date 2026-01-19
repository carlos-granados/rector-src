<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class RethrowException
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException $e) {
            throw $e;
        } catch (\InvalidArgumentException $e) {
            throw $e;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class RethrowException
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException|\InvalidArgumentException $e) {
            throw $e;
        }
    }
}

?>
