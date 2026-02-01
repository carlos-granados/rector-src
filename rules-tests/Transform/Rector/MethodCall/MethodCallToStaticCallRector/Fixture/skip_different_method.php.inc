<?php

namespace Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Fixture;

use Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Source\AnotherDependency;

final class SkipDifferentMethod
{
    public function loadConfiguration(AnotherDependency $dep)
    {
        // Different method name, should not be transformed
        return $dep->otherMethod('value');
    }
}
