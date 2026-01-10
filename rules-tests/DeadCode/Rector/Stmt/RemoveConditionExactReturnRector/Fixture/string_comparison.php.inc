<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class StringComparison
{
    public function run(string $name)
    {
        if ($name === 'default') {
            return 'default';
        }

        return $name;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class StringComparison
{
    public function run(string $name)
    {
        return $name;
    }
}

?>
