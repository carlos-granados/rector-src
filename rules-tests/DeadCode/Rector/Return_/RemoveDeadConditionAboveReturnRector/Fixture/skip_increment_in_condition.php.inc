<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class SkipIncrementInCondition
{
    public function run($count)
    {
        if (++$count) {
            return true;
        }

        return true;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class SkipIncrementInCondition
{
    public function run($count)
    {
        return true;
    }
}

?>
