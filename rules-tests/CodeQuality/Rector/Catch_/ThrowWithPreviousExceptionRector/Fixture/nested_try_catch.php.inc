<?php

namespace Rector\Tests\CodeQuality\Rector\Catch_\ThrowWithPreviousExceptionRector\Fixture;

class NestedTryCatch
{
    public function run()
    {
        try {
            $someCode = 1;
        } catch (Throwable $throwable) {
            try {
                $anotherCode = 2;
            } catch (Exception $exception) {
                throw new AnotherException('nested');
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Catch_\ThrowWithPreviousExceptionRector\Fixture;

class NestedTryCatch
{
    public function run()
    {
        try {
            $someCode = 1;
        } catch (Throwable $throwable) {
            try {
                $anotherCode = 2;
            } catch (Exception $exception) {
                throw new AnotherException('nested', $throwable->getCode(), $throwable);
            }
        }
    }
}

?>
