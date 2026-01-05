<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveDoubleAssignRector\Fixture;

class ArrayDimDoubleAssign
{
    public function run()
    {
        $arr = [];
        $arr[0] = 1;
        $arr[0] = 2;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveDoubleAssignRector\Fixture;

class ArrayDimDoubleAssign
{
    public function run()
    {
        $arr = [];
        $arr[0] = 2;
    }
}

?>
