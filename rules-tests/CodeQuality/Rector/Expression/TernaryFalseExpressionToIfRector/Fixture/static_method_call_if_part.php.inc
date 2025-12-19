<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

class StaticMethodCallIfPart
{
    public static function doSomething()
    {
    }

    public function run($condition)
    {
        $condition ? self::doSomething() : false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

class StaticMethodCallIfPart
{
    public static function doSomething()
    {
    }

    public function run($condition)
    {
        if ($condition) {
            self::doSomething();
        }
    }
}

?>
