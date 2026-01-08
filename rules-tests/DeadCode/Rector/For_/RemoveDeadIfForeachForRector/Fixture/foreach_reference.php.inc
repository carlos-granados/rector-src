<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadIfForeachForRector\Fixture;

class ForeachReference
{
    public function run($values)
    {
        foreach ($values as &$value) {
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadIfForeachForRector\Fixture;

class ForeachReference
{
    public function run($values)
    {
    }
}

?>
