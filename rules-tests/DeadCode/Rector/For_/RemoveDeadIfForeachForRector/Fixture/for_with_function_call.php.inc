<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadIfForeachForRector\Fixture;

class ForWithFunctionCall
{
    public function run($array)
    {
        for ($i = 0; $i < count($array); ++$i) {
        }
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadIfForeachForRector\Fixture;

class ForWithFunctionCall
{
    public function run($array)
    {
    }
}
