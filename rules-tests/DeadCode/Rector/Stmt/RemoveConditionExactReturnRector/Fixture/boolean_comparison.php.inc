<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class BooleanComparison
{
    public function run(bool $flag)
    {
        if ($flag === true) {
            return true;
        }

        return $flag;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class BooleanComparison
{
    public function run(bool $flag)
    {
        return $flag;
    }
}

?>
