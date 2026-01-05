<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveDoubleAssignRector\Fixture;

class ThreeConsecutiveAssigns
{
    public function run()
    {
        $value = 1;
        $value = 2;
        $value = 3;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveDoubleAssignRector\Fixture;

class ThreeConsecutiveAssigns
{
    public function run()
    {
        $value = 3;
    }
}

?>
