<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

use Throwable;

class NonFullyQualified
{
    public function run()
    {
        try {
            // some code
        } catch (\RuntimeException $exception) {
            echo 'error';
        } catch (Throwable $throwable) {
            throw $throwable;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\TryCatch\RemoveDeadCatchRector\Fixture;

use Throwable;

class NonFullyQualified
{
    public function run()
    {
        try {
            // some code
        } catch (\RuntimeException $exception) {
            echo 'error';
        }
    }
}

?>
