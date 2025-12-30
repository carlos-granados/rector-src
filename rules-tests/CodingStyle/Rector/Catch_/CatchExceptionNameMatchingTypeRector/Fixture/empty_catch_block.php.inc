<?php

namespace Rector\Tests\CodingStyle\Rector\Catch_\CatchExceptionNameMatchingTypeRector\Fixture;

class EmptyCatchBlock
{
    public function run()
    {
        try {
            // ...
        } catch (RuntimeException $e) {
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Catch_\CatchExceptionNameMatchingTypeRector\Fixture;

class EmptyCatchBlock
{
    public function run()
    {
        try {
            // ...
        } catch (RuntimeException $runtimeException) {
        }
    }
}

?>
