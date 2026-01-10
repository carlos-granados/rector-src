<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class ConstantComparison
{
    private const DEFAULT_VALUE = 100;

    public function run(int $value)
    {
        if ($value === self::DEFAULT_VALUE) {
            return self::DEFAULT_VALUE;
        }

        return $value;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class ConstantComparison
{
    private const DEFAULT_VALUE = 100;

    public function run(int $value)
    {
        return $value;
    }
}

?>
