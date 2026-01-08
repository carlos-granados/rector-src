<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadContinueRector\Fixture;

class EmptyLoopContinue
{
    public function run($values)
    {
        foreach ($values as $value) {
            continue;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadContinueRector\Fixture;

class EmptyLoopContinue
{
    public function run($values)
    {
        foreach ($values as $value) {
        }
    }
}

?>
