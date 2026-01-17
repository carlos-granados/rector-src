<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

abstract class AbstractClass
{
    public function run()
    {
        return $this->process();
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

abstract class AbstractClass
{
    public function run()
    {
        return static::process();
    }

    public static function process(): string
    {
        return 'processed';
    }
}

?>
