<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

class FqcnTarget
{
    public function doWork(): string
    {
        return 'work';
    }
}

class WithFqcn
{
    public function run()
    {
        return \Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture\FqcnTarget::doWork();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

class FqcnTarget
{
    public function doWork(): string
    {
        return 'work';
    }
}

class WithFqcn
{
    public function run()
    {
        return (new \Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture\FqcnTarget())->doWork();
    }
}

?>
