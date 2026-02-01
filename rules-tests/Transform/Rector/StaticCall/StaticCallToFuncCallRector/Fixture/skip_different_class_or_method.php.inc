<?php

namespace Rector\Tests\Transform\Rector\StaticCall\StaticCallToFuncCallRector\Fixture;

use Rector\Tests\Transform\Rector\StaticCall\StaticCallToFuncCallRector\Source\SomeOldStaticClass;

class SkipDifferentClassOrMethod
{
    public function run()
    {
        SomeOldStaticClass::otherMethod('template');
        OtherClass::render('template');
    }
}
