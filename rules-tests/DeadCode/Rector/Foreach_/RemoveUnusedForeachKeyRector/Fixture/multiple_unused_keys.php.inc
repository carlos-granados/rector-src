<?php

namespace Rector\Tests\DeadCode\Rector\Foreach_\RemoveUnusedForeachKeyRector\Fixture;

final class MultipleUnusedKeys
{
    public function run()
    {
        $items = [];
        foreach ($items as $key1 => $value1) {
            $result1 = $value1;
        }
        
        foreach ($items as $key2 => $value2) {
            $result2 = $value2;
        }
    }
}

-----
<?php

namespace Rector\Tests\DeadCode\Rector\Foreach_\RemoveUnusedForeachKeyRector\Fixture;

final class MultipleUnusedKeys
{
    public function run()
    {
        $items = [];
        foreach ($items as $value1) {
            $result1 = $value1;
        }
        
        foreach ($items as $value2) {
            $result2 = $value2;
        }
    }
}
