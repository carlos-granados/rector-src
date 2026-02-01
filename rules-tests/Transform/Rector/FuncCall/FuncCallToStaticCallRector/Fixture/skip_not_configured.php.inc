<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToStaticCallRector\Fixture;

class SkipNotConfigured
{
    public function someMethod()
    {
        // Function not in config should not be transformed
        \other_function('template', []);
    }
}
