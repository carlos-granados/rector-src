<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class PropertyFetchCondition
{
    private array $items = [];

    public function run()
    {
        $count = 100;
        if ($this->items === []) {
            $count = 0;
        }

        if ($this->items === []) {
            return $count;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class PropertyFetchCondition
{
    private array $items = [];

    public function run()
    {
        $count = 100;
        if ($this->items === []) {
            $count = 0;
            return $count;
        }
    }
}

?>
