<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

class StaticPropertyCondition
{
    public static ?string $name;

    public function run()
    {
        $value = self::$name ? self::$name : 'anonymous';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

class StaticPropertyCondition
{
    public static ?string $name;

    public function run()
    {
        $value = self::$name ?: 'anonymous';
    }
}

?>
