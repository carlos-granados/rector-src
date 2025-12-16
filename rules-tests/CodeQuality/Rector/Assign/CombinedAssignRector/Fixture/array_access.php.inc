<?php

namespace Rector\Tests\CodeQuality\Rector\Assign\CombinedAssignRector\Fixture;

class ArrayAccess
{
    public function run()
    {
        $arr = [1, 2, 3];
        $arr[0] = $arr[0] + 5;
        $arr[1] = $arr[1] * 2;
        $arr[2] = $arr[2] - 1;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Assign\CombinedAssignRector\Fixture;

class ArrayAccess
{
    public function run()
    {
        $arr = [1, 2, 3];
        $arr[0] += 5;
        $arr[1] *= 2;
        $arr[2] -= 1;
    }
}

?>
