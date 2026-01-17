<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class WithArguments
{
    public function run()
    {
        return $this->calculate(1, 2, 3);
    }

    public static function calculate(int $a, int $b, int $c): int
    {
        return $a + $b + $c;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class WithArguments
{
    public function run()
    {
        return static::calculate(1, 2, 3);
    }

    public static function calculate(int $a, int $b, int $c): int
    {
        return $a + $b + $c;
    }
}

?>
