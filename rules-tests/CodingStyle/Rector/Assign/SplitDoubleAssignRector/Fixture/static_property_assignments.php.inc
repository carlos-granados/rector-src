<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\SplitDoubleAssignRector\Fixture;

class StaticPropertyAssignments
{
    private static $a;
    private static $b;

    public function run()
    {
        self::$a = self::$b = 1;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\SplitDoubleAssignRector\Fixture;

class StaticPropertyAssignments
{
    private static $a;
    private static $b;

    public function run()
    {
        self::$a = 1;
        self::$b = 1;
    }
}

?>
