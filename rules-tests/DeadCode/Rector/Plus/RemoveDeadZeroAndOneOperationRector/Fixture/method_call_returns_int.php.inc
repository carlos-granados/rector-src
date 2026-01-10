<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class MethodCallReturnsInt
{
    public function run()
    {
        $result = $this->getValue() + 0;
        $result2 = $this->getValue() * 1;
    }

    public function getValue(): int
    {
        return 5;
    }
}
?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Plus\RemoveDeadZeroAndOneOperationRector\Fixture;

class MethodCallReturnsInt
{
    public function run()
    {
        $result = $this->getValue();
        $result2 = $this->getValue();
    }

    public function getValue(): int
    {
        return 5;
    }
}
?>
