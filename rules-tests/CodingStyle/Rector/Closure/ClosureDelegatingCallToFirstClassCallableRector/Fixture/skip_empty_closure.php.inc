<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\ClosureDelegatingCallToFirstClassCallableRector\Fixture;

final class SkipEmptyClosure
{
    public function run()
    {
        function ($foo)
        {
        };
    }
}
