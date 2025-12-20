<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ChangeArrayPushToArrayAssignRector\Fixture;

final class ArrayAccess
{
    public function run()
    {
        $arrays = [[]];
        array_push($arrays[0], $item);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ChangeArrayPushToArrayAssignRector\Fixture;

final class ArrayAccess
{
    public function run()
    {
        $arrays = [[]];
        $arrays[0][] = $item;
    }
}

?>
