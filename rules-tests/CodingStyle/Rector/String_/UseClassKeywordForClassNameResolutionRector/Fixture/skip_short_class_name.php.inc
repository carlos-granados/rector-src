<?php

namespace Rector\Tests\CodingStyle\Rector\String_\UseClassKeywordForClassNameResolutionRector\Fixture;

class SkipShortClassName
{
    public function run()
    {
        // Short class names without namespace should be skipped
        return 'stdClass::class';
    }
}
