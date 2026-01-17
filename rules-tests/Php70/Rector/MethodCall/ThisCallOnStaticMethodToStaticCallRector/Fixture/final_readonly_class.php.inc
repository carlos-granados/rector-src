<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

final readonly class FinalReadonlyClass
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

final readonly class FinalReadonlyClass
{
    public function run()
    {
        return self::process();
    }

    public static function process(): string
    {
        return 'processed';
    }
}

?>
