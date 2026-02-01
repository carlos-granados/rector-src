<?php

namespace Rector\Tests\Transform\Rector\MethodCall\MethodCallToFuncCallRector\Fixture;

use Rector\Tests\Transform\Rector\MethodCall\MethodCallToFuncCallRector\Source\ParentControllerWithRender;

final class SkipDifferentMethod extends ParentControllerWithRender
{
    public function show()
    {
        // Different method name, should not be transformed
        return $this->otherMethod('some_template');
    }

    public function otherMethod(string $template)
    {
    }
}
