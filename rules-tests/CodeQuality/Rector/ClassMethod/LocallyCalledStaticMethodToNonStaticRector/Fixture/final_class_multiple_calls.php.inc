<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\LocallyCalledStaticMethodToNonStaticRector\Fixture;

final class FinalClassMultipleCalls
{
    public function run()
    {
        self::someStatic();
        $this->anotherMethod();
        self::someStatic();
    }

    private function anotherMethod()
    {
        self::someStatic();
    }

    private static function someStatic()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\LocallyCalledStaticMethodToNonStaticRector\Fixture;

final class FinalClassMultipleCalls
{
    public function run()
    {
        $this->someStatic();
        $this->anotherMethod();
        $this->someStatic();
    }

    private function anotherMethod()
    {
        $this->someStatic();
    }

    private function someStatic()
    {
    }
}

?>
