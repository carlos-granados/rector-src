<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

final class StaticProperty
{
    public static array $staticArray = [];

    public function run()
    {
        if (empty(self::$staticArray)) {
            return true;
        }

        if (!empty(self::$staticArray)) {
            return false;
        }

        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Empty_\SimplifyEmptyCheckOnEmptyArrayRector\Fixture;

final class StaticProperty
{
    public static array $staticArray = [];

    public function run()
    {
        if (self::$staticArray === []) {
            return true;
        }

        if (self::$staticArray !== []) {
            return false;
        }

        return null;
    }
}

?>
