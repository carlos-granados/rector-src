<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class ZeroPlus
{
    public function run(int $value)
    {
        $result = 0 + $value;
    }
}
?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class ZeroPlus
{
    public function run(int $value)
    {
        $result = $value;
    }
}
?>
