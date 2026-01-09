<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

final class StaticPropertyArray
{
    private static array $items = [];

    public static function run()
    {
        if (self::$items !== []) {
            foreach (self::$items as $item) {
                echo $item;
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveUnusedNonEmptyArrayBeforeForeachRector\Fixture;

final class StaticPropertyArray
{
    private static array $items = [];

    public static function run()
    {
        foreach (self::$items as $item) {
            echo $item;
        }
    }
}

?>
