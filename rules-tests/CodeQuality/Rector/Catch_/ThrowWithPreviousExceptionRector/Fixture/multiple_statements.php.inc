<?php

namespace Rector\Tests\CodeQuality\Rector\Catch_\ThrowWithPreviousExceptionRector\Fixture;

class MultipleStatements
{
    public function run()
    {
        try {
            $someCode = 1;
        } catch (Throwable $throwable) {
            $message = 'Error: ' . $throwable->getMessage();
            error_log($message);
            throw new AnotherException($message);
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Catch_\ThrowWithPreviousExceptionRector\Fixture;

class MultipleStatements
{
    public function run()
    {
        try {
            $someCode = 1;
        } catch (Throwable $throwable) {
            $message = 'Error: ' . $throwable->getMessage();
            error_log($message);
            throw new AnotherException($message, $throwable->getCode(), $throwable);
        }
    }
}

?>
