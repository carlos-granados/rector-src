<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class MergeMultiExceptionWithNext
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException|\InvalidArgumentException $e) {
            handleError($e);
        } catch (\LogicException $e) {
            handleError($e);
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\TryCatch\MultiExceptionCatchRector\Fixture;

final class MergeMultiExceptionWithNext
{
    public function run()
    {
        try {
            doSomething();
        } catch (\RuntimeException|\InvalidArgumentException|\LogicException $e) {
            handleError($e);
        }
    }
}

?>
