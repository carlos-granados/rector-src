<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class InClosure
{
    public function run()
    {
        return function (array $items) {
            $count = 100;
            if ($items === []) {
                $count = 0;
            }

            if ($items === []) {
                return $count;
            }
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class InClosure
{
    public function run()
    {
        return function (array $items) {
            $count = 100;
            if ($items === []) {
                $count = 0;
                return $count;
            }
        };
    }
}

?>
