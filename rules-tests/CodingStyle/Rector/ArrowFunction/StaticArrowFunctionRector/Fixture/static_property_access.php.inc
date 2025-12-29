<?php

namespace Rector\Tests\CodingStyle\Rector\ArrowFunction\StaticArrowFunctionRector\Fixture;

class StaticPropertyAccess
{
    private static $data = 'data';

    public function run()
    {
        // Should be made static - only accesses static property
        fn() => self::$data;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ArrowFunction\StaticArrowFunctionRector\Fixture;

class StaticPropertyAccess
{
    private static $data = 'data';

    public function run()
    {
        // Should be made static - only accesses static property
        static fn() => self::$data;
    }
}

?>
