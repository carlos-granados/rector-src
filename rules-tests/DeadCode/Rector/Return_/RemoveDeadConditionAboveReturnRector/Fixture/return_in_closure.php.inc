<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class ReturnInClosure
{
    public function run()
    {
        return function ($value) {
            if ($value > 0) {
                return true;
            }

            return true;
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class ReturnInClosure
{
    public function run()
    {
        return function ($value) {
            return true;
        };
    }
}

?>
