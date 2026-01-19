<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

class ClosureTarget
{
    public function doWork(): string
    {
        return 'work';
    }
}

class InClosure
{
    public function run()
    {
        return function () {
            return ClosureTarget::doWork();
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

class ClosureTarget
{
    public function doWork(): string
    {
        return 'work';
    }
}

class InClosure
{
    public function run()
    {
        return function () {
            return (new ClosureTarget())->doWork();
        };
    }
}

?>
