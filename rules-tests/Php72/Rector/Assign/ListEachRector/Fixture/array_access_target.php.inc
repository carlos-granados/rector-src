<?php

namespace Rector\Tests\Php72\Rector\Assign\ListEachRector\Fixture;

final class ArrayAccessTarget
{
    public function run()
    {
        $result = [];
        $arr = ['a' => 1, 'b' => 2];
        list($result['key'], $result['value']) = each($arr);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php72\Rector\Assign\ListEachRector\Fixture;

final class ArrayAccessTarget
{
    public function run()
    {
        $result = [];
        $arr = ['a' => 1, 'b' => 2];
        $result['key'] = key($arr);
        $result['value'] = current($arr);
        next($arr);
    }
}

?>
