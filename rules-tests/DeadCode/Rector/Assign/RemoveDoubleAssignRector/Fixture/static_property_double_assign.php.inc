<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveDoubleAssignRector\Fixture;

class StaticPropertyDoubleAssign
{
    public static $prop;

    public function run()
    {
        self::$prop = 1;
        self::$prop = 2;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveDoubleAssignRector\Fixture;

class StaticPropertyDoubleAssign
{
    public static $prop;

    public function run()
    {
        self::$prop = 2;
    }
}

?>
