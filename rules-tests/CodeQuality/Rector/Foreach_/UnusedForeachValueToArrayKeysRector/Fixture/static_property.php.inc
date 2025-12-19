<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\UnusedForeachValueToArrayKeysRector\Fixture;

class StaticProperty
{
    public function run(array $values)
    {
        $items = [];
        foreach ($values as $key => $value) {
            $items[$key] = self::$property;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\UnusedForeachValueToArrayKeysRector\Fixture;

class StaticProperty
{
    public function run(array $values)
    {
        $items = [];
        foreach (array_keys($values) as $key) {
            $items[$key] = self::$property;
        }
    }
}

?>
