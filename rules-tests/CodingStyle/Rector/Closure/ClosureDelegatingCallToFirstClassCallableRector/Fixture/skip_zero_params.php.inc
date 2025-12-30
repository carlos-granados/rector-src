<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\ClosureDelegatingCallToFirstClassCallableRector\Fixture;

final class SkipZeroParams
{
    public function run()
    {
        function ()
        {
            return SomeClass::foo();
        };
    }
}
