<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadLoopRector\Fixture;

final class DoWhileSimple
{
    public function run($condition)
    {
        do {
        } while ($condition);
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadLoopRector\Fixture;

final class DoWhileSimple
{
    public function run($condition)
    {
    }
}
