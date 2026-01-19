<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class StaticCallSelf
{
    public static function run()
    {
        return self::doSomething(1, 2, 3);
    }

    private static function doSomething($value)
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class StaticCallSelf
{
    public static function run()
    {
        return self::doSomething(1);
    }

    private static function doSomething($value)
    {
    }
}

?>
