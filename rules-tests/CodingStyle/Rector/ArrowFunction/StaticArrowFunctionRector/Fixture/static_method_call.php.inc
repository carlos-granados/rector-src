<?php

namespace Rector\Tests\CodingStyle\Rector\ArrowFunction\StaticArrowFunctionRector\Fixture;

class StaticMethodCall
{
    public static function getData(): string
    {
        return 'data';
    }

    public function run()
    {
        // Should be made static - only calls static method
        fn() => self::getData();
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ArrowFunction\StaticArrowFunctionRector\Fixture;

class StaticMethodCall
{
    public static function getData(): string
    {
        return 'data';
    }

    public function run()
    {
        // Should be made static - only calls static method
        static fn() => self::getData();
    }
}

?>
