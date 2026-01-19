<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class EmptyCatchBodies
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException $e) {
        } catch (\InvalidArgumentException $e) {
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class EmptyCatchBodies
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException|\InvalidArgumentException $e) {
        }
    }
}

?>
