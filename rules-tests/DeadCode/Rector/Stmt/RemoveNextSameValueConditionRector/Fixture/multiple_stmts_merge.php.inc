<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class MultipleStmtsMerge
{
    public function run(array $items)
    {
        $count = 100;
        if ($items === []) {
            $count = 0;
            $count++;
        }

        if ($items === []) {
            return $count;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class MultipleStmtsMerge
{
    public function run(array $items)
    {
        $count = 100;
        if ($items === []) {
            $count = 0;
            $count++;
            return $count;
        }
    }
}

?>
