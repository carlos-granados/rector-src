<?php

namespace Rector\Tests\Php70\Rector\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class SkipNonStaticMethod
{
    public function run()
    {
        return $this->process();
    }

    public function process()
    {
        return 'processed';
    }
}

?>
