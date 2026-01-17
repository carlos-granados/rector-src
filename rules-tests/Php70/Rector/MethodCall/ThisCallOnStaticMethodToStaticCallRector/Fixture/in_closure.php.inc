<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class InClosure
{
    public function run()
    {
        $func = function () {
            return $this->process();
        };
        return $func();
    }

    public static function process(): string
    {
        return 'processed';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class InClosure
{
    public function run()
    {
        $func = function () {
            return static::process();
        };
        return $func();
    }

    public static function process(): string
    {
        return 'processed';
    }
}

?>
