<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class ReturnExpression
{
    public function run($a, $b)
    {
        if ($a > $b) {
            return $a + $b;
        }

        return $a + $b;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class ReturnExpression
{
    public function run($a, $b)
    {
        return $a + $b;
    }
}

?>
