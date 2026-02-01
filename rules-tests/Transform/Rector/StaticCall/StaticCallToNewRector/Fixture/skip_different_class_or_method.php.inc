<?php

namespace Rector\Tests\Transform\Rector\StaticCall\StaticCallToNewRector\Fixture;

use Rector\Tests\Transform\Rector\StaticCall\StaticCallToNewRector\Source\SomeJsonResponse;

class SkipDifferentClassOrMethod
{
    public function run()
    {
        SomeJsonResponse::otherMethod(['foo' => 'bar']);
        OtherClass::create(['foo' => 'bar']);
    }
}
