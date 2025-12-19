<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\UnusedForeachValueToArrayKeysRector\Fixture;

class MultipleStatements
{
    public function run(array $values)
    {
        $items = [];
        foreach ($values as $key => $value) {
            $items[$key] = null;
            echo $key;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Foreach_\UnusedForeachValueToArrayKeysRector\Fixture;

class MultipleStatements
{
    public function run(array $values)
    {
        $items = [];
        foreach (array_keys($values) as $key) {
            $items[$key] = null;
            echo $key;
        }
    }
}

?>
