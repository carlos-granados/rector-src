<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class InStaticMethod
{
    public static function run()
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

class InStaticMethod
{
    public static function run()
    {
        return static::process();
    }

    public static function process(): string
    {
        return 'processed';
    }
}

?>
