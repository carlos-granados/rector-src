<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

interface SomeInterface
{
    public function doWork();
}

class SkipInterface
{
    public function run()
    {
        return SomeInterface::doWork();
    }
}
