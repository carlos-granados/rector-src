<?php

namespace Rector\Tests\CodingStyle\Rector\Catch_\CatchExceptionNameMatchingTypeRector\Fixture;

class FullyQualifiedException
{
    public function run()
    {
        try {
            // ...
        } catch (\RuntimeException $exception) {
            $exception->getMessage();
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Catch_\CatchExceptionNameMatchingTypeRector\Fixture;

class FullyQualifiedException
{
    public function run()
    {
        try {
            // ...
        } catch (\RuntimeException $runtimeException) {
            $runtimeException->getMessage();
        }
    }
}

?>
