<?php

namespace Rector\Tests\CodingStyle\Rector\Catch_\CatchExceptionNameMatchingTypeRector\Fixture;

class SkipCatchWithoutVariable
{
    public function run()
    {
        try {
            // ...
        } catch (RuntimeException) {
            // PHP 8.0+ non-capturing catch
        }
    }
}
