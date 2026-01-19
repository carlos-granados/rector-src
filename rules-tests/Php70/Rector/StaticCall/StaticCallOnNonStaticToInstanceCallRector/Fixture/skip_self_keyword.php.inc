<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

class SkipSelfKeyword
{
    public function doWork(): string
    {
        return 'work';
    }

    public function run()
    {
        return self::doWork();
    }
}
