<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\ClosureDelegatingCallToFirstClassCallableRector\Fixture;

final class SkipNewExpression
{
    public function run()
    {
        function ($foo)
        {
            return new SomeClass($foo);
        };
    }
}
