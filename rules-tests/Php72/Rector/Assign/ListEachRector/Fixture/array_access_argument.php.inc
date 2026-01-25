<?php

namespace Rector\Tests\Php72\Rector\Assign\ListEachRector\Fixture;

final class ArrayAccessArgument
{
    public function run()
    {
        $items = [
            'first' => ['a' => 1, 'b' => 2],
            'second' => ['c' => 3, 'd' => 4],
        ];
        $index = 'first';
        list($key, $value) = each($items[$index]);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php72\Rector\Assign\ListEachRector\Fixture;

final class ArrayAccessArgument
{
    public function run()
    {
        $items = [
            'first' => ['a' => 1, 'b' => 2],
            'second' => ['c' => 3, 'd' => 4],
        ];
        $index = 'first';
        $key = key($items[$index]);
        $value = current($items[$index]);
        next($items[$index]);
    }
}

?>
