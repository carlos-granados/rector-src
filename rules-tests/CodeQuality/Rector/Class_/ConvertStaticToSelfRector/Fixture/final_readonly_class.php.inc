<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\ConvertStaticToSelfRector\Fixture;

final readonly class FinalReadonlyClass
{
    public static string $property = 'value';

    public static function run(): void
    {
    }

    public function execute()
    {
        static::run();
        static::$property;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\ConvertStaticToSelfRector\Fixture;

final readonly class FinalReadonlyClass
{
    public static string $property = 'value';

    public static function run(): void
    {
    }

    public function execute()
    {
        self::run();
        self::$property;
    }
}

?>
