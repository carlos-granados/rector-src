<?php

namespace Rector\Tests\Transform\Rector\StaticCall\StaticCallToMethodCallRector\Fixture;

class SkipNonConfiguredStaticCall
{
    public function run()
    {
        return SomeOtherClass::someMethod('file', 'content');
    }
}
