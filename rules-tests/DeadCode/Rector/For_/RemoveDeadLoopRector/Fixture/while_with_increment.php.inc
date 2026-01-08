<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadLoopRector\Fixture;

final class WhileWithIncrement
{
    public function run($max)
    {
        $i = 0;
        while ($i++ < $max) {
        }
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadLoopRector\Fixture;

final class WhileWithIncrement
{
    public function run($max)
    {
        $i = 0;
    }
}
