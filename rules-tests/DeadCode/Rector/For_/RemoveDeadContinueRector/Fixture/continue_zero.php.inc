<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadContinueRector\Fixture;

class ContinueZero
{
    public function run($values)
    {
        for ($i = 1; $i < count($values); ++$i) {
            echo $i;
            continue 0;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadContinueRector\Fixture;

class ContinueZero
{
    public function run($values)
    {
        for ($i = 1; $i < count($values); ++$i) {
            echo $i;
        }
    }
}

?>
