<?php

namespace Rector\Tests\CodingStyle\Rector\ArrowFunction\ArrowFunctionDelegatingCallToFirstClassCallableRector\Fixture;

final class SkipNewExpression
{
    public function run()
    {
        // Arrow function that creates a new object should be skipped
        // (not a FuncCall, MethodCall, or StaticCall)
        fn ($foo) => new \DateTime($foo);
    }
}
