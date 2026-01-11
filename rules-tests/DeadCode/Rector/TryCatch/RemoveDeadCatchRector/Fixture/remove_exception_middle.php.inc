<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

class RemoveExceptionMiddle
{
    public function run()
    {
        try {
            // some code
        } catch (\RuntimeException $runtimeException) {
            echo 'runtime error';
        } catch (\LogicException $logicException) {
            throw $logicException;
        } catch (\Throwable $throwable) {
            throw $throwable;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

class RemoveExceptionMiddle
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
