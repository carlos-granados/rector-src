<?php

namespace Rector\Tests\CodingStyle\Rector\ArrowFunction\ArrowFunctionDelegatingCallToFirstClassCallableRector\Fixture;

final class SkipPropertyAccess
{
    public function run($obj)
    {
        // Arrow function that accesses a property should be skipped
        // (not a call)
        fn ($foo) => $foo->property;
    }
}
