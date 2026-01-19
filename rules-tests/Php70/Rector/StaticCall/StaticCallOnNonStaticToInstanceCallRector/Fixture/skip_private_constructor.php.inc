<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

use Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Source\PrivateConstructor;

class SkipPrivateConstructor
{
    public function run()
    {
        return PrivateConstructor::doWork();
    }
}
