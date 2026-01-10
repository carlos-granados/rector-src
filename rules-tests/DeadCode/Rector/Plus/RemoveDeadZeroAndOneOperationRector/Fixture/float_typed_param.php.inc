<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class FloatTypedParam
{
    public function run(float $value)
    {
        $result = $value + 0;
        $result2 = $value - 0;
        $result3 = $value * 1;
        $result4 = $value / 1;
    }
}
?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class FloatTypedParam
{
    public function run(float $value)
    {
        $result = $value;
        $result2 = $value;
        $result3 = $value;
        $result4 = $value;
    }
}
?>
