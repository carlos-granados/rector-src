<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

class SkipStaticKeyword
{
    public function doWork(): string
    {
        return 'work';
    }

    public function run()
    {
        return static::doWork();
    }
}
