<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class BooleanCondition
{
    public function run(bool $flag)
    {
        $count = 100;
        if ($flag === true) {
            $count = 0;
        }

        if ($flag === true) {
            return $count;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class BooleanCondition
{
    public function run(bool $flag)
    {
        $count = 100;
        if ($flag === true) {
            $count = 0;
            return $count;
        }
    }
}

?>
