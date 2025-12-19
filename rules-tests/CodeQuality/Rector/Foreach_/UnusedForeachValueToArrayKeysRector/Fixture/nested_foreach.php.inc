<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\UnusedForeachValueToArrayKeysRector\Fixture;

class NestedForeach
{
    public function run(array $values, array $other)
    {
        $items = [];
        foreach ($values as $key => $value) {
            foreach ($other as $otherKey => $otherValue) {
                $items[$key][$otherKey] = null;
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\UnusedForeachValueToArrayKeysRector\Fixture;

class NestedForeach
{
    public function run(array $values, array $other)
    {
        $items = [];
        foreach (array_keys($values) as $key) {
            foreach (array_keys($other) as $otherKey) {
                $items[$key][$otherKey] = null;
            }
        }
    }
}

?>
