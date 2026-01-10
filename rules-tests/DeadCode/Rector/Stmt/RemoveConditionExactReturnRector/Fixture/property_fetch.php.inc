<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class PropertyFetch
{
    private int $default = 0;

    public function run(int $value)
    {
        if ($value === $this->default) {
            return $this->default;
        }

        return $value;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class PropertyFetch
{
    private int $default = 0;

    public function run(int $value)
    {
        return $value;
    }
}

?>
