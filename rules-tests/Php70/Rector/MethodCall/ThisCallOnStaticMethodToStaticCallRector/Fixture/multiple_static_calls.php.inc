<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class MultipleStaticCalls
{
    public function run()
    {
        $a = $this->first();
        $b = $this->second();
        return $a + $b;
    }

    public static function first(): int
    {
        return 1;
    }

    public static function second(): int
    {
        return 2;
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class MultipleStaticCalls
{
    public function run()
    {
        $a = static::first();
        $b = static::second();
        return $a + $b;
    }

    public static function first(): int
    {
        return 1;
    }

    public static function second(): int
    {
        return 2;
    }
}

?>
