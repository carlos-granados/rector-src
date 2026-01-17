<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class ProtectedStaticMethod
{
    public function run()
    {
        return $this->process();
    }

    protected static function process(): string
    {
        return 'processed';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class ProtectedStaticMethod
{
    public function run()
    {
        return static::process();
    }

    protected static function process(): string
    {
        return 'processed';
    }
}

?>
