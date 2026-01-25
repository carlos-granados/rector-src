<?php

namespace Rector\Tests\Php72\Rector\Assign\ListEachRector\Fixture;

final class ShortListSyntax
{
    public function run()
    {
        $arr = ['a' => 1, 'b' => 2];
        [$key, $value] = each($arr);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php72\Rector\Assign\ListEachRector\Fixture;

final class ShortListSyntax
{
    public function run()
    {
        $arr = ['a' => 1, 'b' => 2];
        $key = key($arr);
        $value = current($arr);
        next($arr);
    }
}

?>
