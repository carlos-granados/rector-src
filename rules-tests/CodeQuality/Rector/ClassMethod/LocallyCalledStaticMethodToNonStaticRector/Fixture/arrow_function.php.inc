<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\LocallyCalledStaticMethodToNonStaticRector\Fixture;

final class ArrowFunction
{
    public function run()
    {
        return fn() => self::method("string");
    }

    private static function method(?string $value)
    {
        return $value;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\LocallyCalledStaticMethodToNonStaticRector\Fixture;

final class ArrowFunction
{
    public function run()
    {
        return fn() => $this->method("string");
    }

    private function method(?string $value)
    {
        return $value;
    }
}

?>
