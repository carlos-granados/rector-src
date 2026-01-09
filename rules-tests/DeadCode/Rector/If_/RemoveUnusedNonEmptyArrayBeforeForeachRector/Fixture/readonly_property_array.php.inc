<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

final class ReadonlyPropertyArray
{
    public function __construct(
        private readonly array $items
    ) {
    }

    public function run()
    {
        if ($this->items !== []) {
            foreach ($this->items as $item) {
                echo $item;
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

final class ReadonlyPropertyArray
{
    public function __construct(
        private readonly array $items
    ) {
    }

    public function run()
    {
        foreach ($this->items as $item) {
            echo $item;
        }
    }
}

?>
