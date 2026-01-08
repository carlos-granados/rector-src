<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadIfForeachForRector\Fixture;

class NestedEmptyLoops
{
    public function run($values)
    {
        foreach ($values as $outer) {
            foreach ($outer as $inner) {
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadIfForeachForRector\Fixture;

class NestedEmptyLoops
{
    public function run($values)
    {
    }
}

?>
