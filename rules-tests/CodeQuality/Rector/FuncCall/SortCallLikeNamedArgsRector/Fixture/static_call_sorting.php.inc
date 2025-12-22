<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SortCallLikeNamedArgsRector\Fixture;

class StaticCallSorting
{
    public static function staticMethod($first, $second, $third) {}

    public static function run()
    {
        self::staticMethod(third: 3, first: 1, second: 2);
        static::staticMethod(second: 2, first: 1);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SortCallLikeNamedArgsRector\Fixture;

class StaticCallSorting
{
    public static function staticMethod($first, $second, $third) {}

    public static function run()
    {
        self::staticMethod(first: 1, second: 2, third: 3);
        static::staticMethod(first: 1, second: 2);
    }
}

?>
