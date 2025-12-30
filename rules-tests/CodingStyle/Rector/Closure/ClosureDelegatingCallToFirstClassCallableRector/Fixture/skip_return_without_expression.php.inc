<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\ClosureDelegatingCallToFirstClassCallableRector\Fixture;

final class SkipReturnWithoutExpression
{
    public function run()
    {
        function ($foo)
        {
            return;
        };
    }
}
