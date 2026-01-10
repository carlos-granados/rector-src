<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class ReturnNull
{
    public function run($value)
    {
        if ($value === null) {
            return null;
        }

        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class ReturnNull
{
    public function run($value)
    {
        return null;
    }
}

?>
