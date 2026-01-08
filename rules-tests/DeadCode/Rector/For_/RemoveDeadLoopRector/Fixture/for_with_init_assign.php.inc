<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadLoopRector\Fixture;

final class ForWithInitAssign
{
    public function run($max)
    {
        for ($i = 0; $i < $max; ++$i) {
        }
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadLoopRector\Fixture;

final class ForWithInitAssign
{
    public function run($max)
    {
    }
}
