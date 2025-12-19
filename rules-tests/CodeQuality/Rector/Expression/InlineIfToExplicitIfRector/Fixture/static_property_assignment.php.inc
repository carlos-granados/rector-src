<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class StaticPropertyAssignment
{
    private static $value;

    public function run()
    {
        is_null(self::$value) && self::$value = 5;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\InlineIfToExplicitIfRector\Fixture;

class StaticPropertyAssignment
{
    private static $value;

    public function run()
    {
        if (is_null(self::$value)) {
            self::$value = 5;
        }
    }
}

?>
