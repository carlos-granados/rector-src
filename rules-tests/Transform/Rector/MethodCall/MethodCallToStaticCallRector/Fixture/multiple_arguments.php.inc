<?php

namespace Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Fixture;

use Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Source\AnotherDependency;

final class MultipleArguments
{
    public function loadConfiguration(AnotherDependency $dep)
    {
        return $dep->process('value', true, ['key' => 'data']);
    }
}

?>
-----
<?php

namespace Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Fixture;

use Rector\Tests\Transform\Rector\MethodCall\MethodCallToStaticCallRector\Source\AnotherDependency;

final class MultipleArguments
{
    public function loadConfiguration(AnotherDependency $dep)
    {
        return \StaticCaller::anotherMethod('value', true, ['key' => 'data']);
    }
}

?>
