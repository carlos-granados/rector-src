<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\ClosureDelegatingCallToFirstClassCallableRector\Fixture;

final class SkipMultipleStatements
{
    public function run()
    {
        function ($foo)
        {
            $bar = $foo + 1;
            return SomeClass::foo($bar);
        };
    }
}
