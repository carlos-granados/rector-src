<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class ReturnVariable
{
    public function run($value)
    {
        if ($value > 0) {
            return $value;
        }

        return $value;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class ReturnVariable
{
    public function run($value)
    {
        return $value;
    }
}

?>
