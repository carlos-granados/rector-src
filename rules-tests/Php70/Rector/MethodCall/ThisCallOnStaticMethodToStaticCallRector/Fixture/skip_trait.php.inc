<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

trait SkipTrait
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
