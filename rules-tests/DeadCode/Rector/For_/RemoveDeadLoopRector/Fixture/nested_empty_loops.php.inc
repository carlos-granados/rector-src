<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadLoopRector\Fixture;

final class NestedEmptyLoops
{
    public function run($values, $other)
    {
        foreach ($values as $value) {
            foreach ($other as $item) {
            }
        }
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadLoopRector\Fixture;

final class NestedEmptyLoops
{
    public function run($values, $other)
    {
    }
}
