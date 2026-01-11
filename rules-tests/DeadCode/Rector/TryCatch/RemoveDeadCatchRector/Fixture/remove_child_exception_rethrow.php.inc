<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

class RemoveChildExceptionRethrow
{
    public function run()
    {
        try {
            // some code
        } catch (\RuntimeException $runtimeException) {
            echo 'runtime error';
        } catch (\Exception $exception) {
            throw $exception;
        } catch (\Throwable $throwable) {
            throw $throwable;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

class RemoveChildExceptionRethrow
{
    public function run()
    {
        try {
            // some code
        } catch (\RuntimeException $runtimeException) {
            echo 'runtime error';
        }
    }
}

?>
