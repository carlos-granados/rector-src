<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class ChainedCall
{
    public function run()
    {
        return $this->first()->process();
    }

    public static function first(): self
    {
        return new self();
    }

    public function process(): string
    {
        return 'processed';
    }
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class ChainedCall
{
    public function run()
    {
        return static::first()->process();
    }

    public static function first(): self
    {
        return new self();
    }

    public function process(): string
    {
        return 'processed';
    }
}

?>
