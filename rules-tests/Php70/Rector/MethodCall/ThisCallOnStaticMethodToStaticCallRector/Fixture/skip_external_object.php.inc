<?php

namespace Rector\Tests\Php70\Reactor\MethodCall\ThisCallOnStaticMethodToStaticCallRector\Fixture;

class SomeService
{
    public static function process(): string
    {
        return 'processed';
    }
}

class SkipExternalObject
{
    private SomeService $service;

    public function run()
    {
        return $this->service->process();
    }
}

?>
