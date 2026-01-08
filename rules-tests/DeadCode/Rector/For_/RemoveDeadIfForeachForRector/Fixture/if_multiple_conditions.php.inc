<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadIfForeachForRector\Fixture;

class IfMultipleConditions
{
    public function run($value1, $value2)
    {
        if ($value1 && $value2) {
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadIfForeachForRector\Fixture;

class IfMultipleConditions
{
    public function run($value1, $value2)
    {
    }
}

?>
