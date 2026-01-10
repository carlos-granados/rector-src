<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class InClosure
{
    public function run()
    {
        return function (array $result) {
            if ($result === []) {
                return [];
            }

            return $result;
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class InClosure
{
    public function run()
    {
        return function (array $result) {
            return $result;
        };
    }
}

?>
