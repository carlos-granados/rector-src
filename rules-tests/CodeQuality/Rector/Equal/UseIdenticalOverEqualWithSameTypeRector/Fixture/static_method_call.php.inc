<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

class StaticMethodCall
{
    public static function getValue(): int
    {
        return 5;
    }

    public function run(int $value)
    {
        if ($value == self::getValue()) {
            return true;
        }

        if (self::getValue() != $value) {
            return false;
        }

        return true;
    }
}

-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

class StaticMethodCall
{
    public static function getValue(): int
    {
        return 5;
    }

    public function run(int $value)
    {
        if ($value === self::getValue()) {
            return true;
        }

        if (self::getValue() !== $value) {
            return false;
        }

        return true;
    }
}
