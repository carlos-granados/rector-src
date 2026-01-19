<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class WithStaticProperty
{
    private static $cache = [];

    public static function get($key)
    {
        if (isset(self::$cache[$key])) {
            return self::$cache[$key];
        }

        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\StmtsAwareInterface\IfIssetToCoalescingRector\Fixture;

class WithStaticProperty
{
    private static $cache = [];

    public static function get($key)
    {
        return self::$cache[$key] ?? null;
    }
}

?>
