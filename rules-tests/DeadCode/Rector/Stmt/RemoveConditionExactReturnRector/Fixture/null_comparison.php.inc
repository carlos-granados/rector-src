<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class NullComparison
{
    public function run(?string $value)
    {
        if ($value === null) {
            return null;
        }

        return $value;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class NullComparison
{
    public function run(?string $value)
    {
        return $value;
    }
}

?>
