<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class WithNamedArguments
{
    public function run()
    {
        return $this->calculate(a: 1, b: 2);
    }

    public static function calculate(int $a, int $b): int
    {
        return $a + $b;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class WithNamedArguments
{
    public function run()
    {
        return static::calculate(a: 1, b: 2);
    }

    public static function calculate(int $a, int $b): int
    {
        return $a + $b;
    }
}

?>
