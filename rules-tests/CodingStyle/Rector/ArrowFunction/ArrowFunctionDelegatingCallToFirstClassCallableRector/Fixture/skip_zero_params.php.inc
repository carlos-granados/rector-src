<?php

namespace Rector\Tests\CodingStyle\Rector\ArrowFunction\ArrowFunctionDelegatingCallToFirstClassCallableRector\Fixture;

use Rector\Tests\CodingStyle\Rector\ArrowFunction\ArrowFunctionDelegatingCallToFirstClassCallableRector\Source\FooBar;

final class SkipZeroParams
{
    public function run()
    {
        // Arrow function with zero params is not equivalent to first class callable
        // fn() => foo() calls foo with NO args
        // foo(...) passes ALL args received
        fn () => FooBar::foo();
    }
}
