<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachItemsAssignToEmptyArrayToAssignRector\Fixture;

class NestedArray
{
    public function run(array $items)
    {
        $outer = [];
        foreach ($items as $item) {
            $outer[] = $item;
        }

        $inner = [];
        foreach ($outer as $value) {
            $inner[] = $value;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\ForeachItemsAssignToEmptyArrayToAssignRector\Fixture;

class NestedArray
{
    public function run(array $items)
    {
        $outer = [];
        $outer = $items;

        $inner = [];
        foreach ($outer as $value) {
            $inner[] = $value;
        }
    }
}

?>
