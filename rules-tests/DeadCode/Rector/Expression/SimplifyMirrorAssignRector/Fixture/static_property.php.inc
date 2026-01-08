<?php

namespace Rector\Tests\DeadCode\Rector\Expression\SimplifyMirrorAssignRector\Fixture;

class StaticProperty
{
    private static $prop;

    public function run()
    {
        self::$prop = self::$prop;
        static::$prop = static::$prop;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Expression\SimplifyMirrorAssignRector\Fixture;

class StaticProperty
{
    private static $prop;

    public function run()
    {
    }
}

?>
