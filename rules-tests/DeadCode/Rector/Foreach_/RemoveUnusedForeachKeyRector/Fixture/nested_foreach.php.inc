<?php

namespace Rector\Tests\DeadCode\Rector\Foreach_\RemoveUnusedForeachKeyRector\Fixture;

final class NestedForeach
{
    public function run()
    {
        $items = [];
        foreach ($items as $key => $value) {
            foreach ($value as $subKey => $subValue) {
                $result = $subValue;
            }
        }
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\Foreach_\RemoveUnusedForeachKeyRector\Fixture;

final class NestedForeach
{
    public function run()
    {
        $items = [];
        foreach ($items as $value) {
            foreach ($value as $subValue) {
                $result = $subValue;
            }
        }
    }
}
