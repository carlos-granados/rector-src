<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

enum SomeEnum
{
    case First;
    case Second;

    public function doWork(): string
    {
        return 'work';
    }
}

class SkipEnum
{
    public function run()
    {
        return SomeEnum::doWork();
    }
}
