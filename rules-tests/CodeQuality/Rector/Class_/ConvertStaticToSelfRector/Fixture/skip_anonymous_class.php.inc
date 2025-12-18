<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\ConvertStaticToSelfRector\Fixture;

function createAnonymousClass()
{
    return new class {
        private static string $property = 'value';

        private static function run(): void
        {
        }

        public function execute()
        {
            static::run();
            static::$property;
        }
    };
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\ConvertStaticToSelfRector\Fixture;

function createAnonymousClass()
{
    return new class {
        private static string $property = 'value';

        private static function run(): void
        {
        }

        public function execute()
        {
            self::run();
            self::$property;
        }
    };
}

?>
