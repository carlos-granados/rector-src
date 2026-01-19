<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

class MultiArgTarget
{
    public function doWork(string $name, int $value, array $options): string
    {
        return $name . $value;
    }
}

class WithMultipleArguments
{
    public function run()
    {
        return MultiArgTarget::doWork('test', 42, ['key' => 'value']);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\StaticCall\StaticCallOnNonStaticToInstanceCallRector\Fixture;

class MultiArgTarget
{
    public function doWork(string $name, int $value, array $options): string
    {
        return $name . $value;
    }
}

class WithMultipleArguments
{
    public function run()
    {
        return (new MultiArgTarget())->doWork('test', 42, ['key' => 'value']);
    }
}

?>
