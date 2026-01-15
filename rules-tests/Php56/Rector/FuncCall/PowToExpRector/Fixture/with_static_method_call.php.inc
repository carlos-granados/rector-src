<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

class WithStaticMethodCall
{
    public function run()
    {
        return pow(self::getBase(), static::getExponent());
    }

    private static function getBase(): int
    {
        return 2;
    }

    private static function getExponent(): int
    {
        return 3;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

class WithStaticMethodCall
{
    public function run()
    {
        return self::getBase() ** static::getExponent();
    }

    private static function getBase(): int
    {
        return 2;
    }

    private static function getExponent(): int
    {
        return 3;
    }
}

?>
