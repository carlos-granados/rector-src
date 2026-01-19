<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

use Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Source\ProtectedConstructor;

class SkipProtectedConstructor
{
    public function run()
    {
        return ProtectedConstructor::doWork();
    }
}
