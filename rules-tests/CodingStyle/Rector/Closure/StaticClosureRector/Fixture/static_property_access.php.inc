<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\StaticClosureRector\Fixture;

class StaticPropertyAccess
{
    private static $config = 'config';

    public function run()
    {
        function () {
            return self::$config;
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Closure\StaticClosureRector\Fixture;

class StaticPropertyAccess
{
    private static $config = 'config';

    public function run()
    {
        static function () {
            return self::$config;
        };
    }
}

?>
