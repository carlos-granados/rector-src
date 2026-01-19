<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

trait SomeTrait
{
    public function doWork()
    {
        return 'work';
    }
}

class SkipTrait
{
    public function run()
    {
        return SomeTrait::doWork();
    }
}
