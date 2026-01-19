<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class WithReturnStatement
{
    public function run()
    {
        try {
            return doSomething();
        } catch (\RuntimeException $e) {
            return null;
        } catch (\InvalidArgumentException $e) {
            return null;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class WithReturnStatement
{
    public function run()
    {
        try {
            return doSomething();
        } catch (\RuntimeException|\InvalidArgumentException $e) {
            return null;
        }
    }
}

?>
