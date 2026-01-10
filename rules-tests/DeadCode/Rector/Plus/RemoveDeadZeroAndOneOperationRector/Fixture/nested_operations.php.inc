<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class NestedOperations
{
    public function run(int $a, int $b)
    {
        $result = ($a + $b) * 1;
        $result2 = ($a * $b) + 0;
    }
}
?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class NestedOperations
{
    public function run(int $a, int $b)
    {
        $result = $a + $b;
        $result2 = $a * $b;
    }
}
?>
