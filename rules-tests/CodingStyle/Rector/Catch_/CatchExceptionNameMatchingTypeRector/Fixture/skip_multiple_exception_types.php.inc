<?php

namespace Rector\Tests\CodingStyle\Rector\Catch_\CatchExceptionNameMatchingTypeRector\Fixture;

class SkipMultipleExceptionTypes
{
    public function run()
    {
        try {
            // ...
        } catch (RuntimeException | InvalidArgumentException $e) {
            $e->getMessage();
        }
    }
}
