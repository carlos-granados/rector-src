<?php

namespace Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Fixture;

class OtherDependency
{
    public function process(string $value)
    {
    }
}

final class SkipDifferentClass
{
    public function loadConfiguration(OtherDependency $other)
    {
        // Different class type, should not be transformed
        return $other->process('value');
    }
}
