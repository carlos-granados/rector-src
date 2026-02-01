<?php

namespace Rector\Tests\Transform\Rector\MethodCall\MethodCallToFuncCallRector\Fixture;

class OtherClass
{
    public function render()
    {
    }
}

final class SkipDifferentClass
{
    public function show(OtherClass $other)
    {
        // Different class type, should not be transformed
        return $other->render('some_template');
    }
}
