<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

class ArrowFunctionTarget
{
    public function doWork(): string
    {
        return 'work';
    }
}

class InArrowFunction
{
    public function run()
    {
        return fn() => ArrowFunctionTarget::doWork();
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

class ArrowFunctionTarget
{
    public function doWork(): string
    {
        return 'work';
    }
}

class InArrowFunction
{
    public function run()
    {
        return fn() => (new ArrowFunctionTarget())->doWork();
    }
}

?>
