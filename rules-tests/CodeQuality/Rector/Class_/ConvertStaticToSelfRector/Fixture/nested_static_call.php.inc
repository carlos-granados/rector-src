<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\ConvertStaticToSelfRector\Fixture;

final class NestedStaticCall
{
    private const VALUE = 1;

    private static function getValue(): int
    {
        return static::VALUE;
    }

    public static function run(): void
    {
        $value = static::getValue();
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\ConvertStaticToSelfRector\Fixture;

final class NestedStaticCall
{
    private const VALUE = 1;

    private static function getValue(): int
    {
        return self::VALUE;
    }

    public static function run(): void
    {
        $value = self::getValue();
    }
}

?>
