<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Fixture;

final class NativeFunctionArraySlice
{
    public function run(array $arr)
    {
        return array_slice($arr, 0, null);
    }
}

?>
-----
<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Fixture;

final class NativeFunctionArraySlice
{
    public function run(array $arr)
    {
        return array_slice($arr, 0);
    }
}

?>
