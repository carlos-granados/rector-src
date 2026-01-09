<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

final class NestedForeach
{
    public function run(array $items)
    {
        if ($items !== []) {
            foreach ($items as $item) {
                if ($item['children'] !== []) {
                    foreach ($item['children'] as $child) {
                        echo $child;
                    }
                }
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

final class NestedForeach
{
    public function run(array $items)
    {
        foreach ($items as $item) {
            if ($item['children'] !== []) {
                foreach ($item['children'] as $child) {
                    echo $child;
                }
            }
        }
    }
}

?>
