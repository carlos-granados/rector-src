<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToConstFetchRector\Fixture;

class SkipNotConfigured
{
    public function run()
    {
        // Function not in config should not be transformed
        $value = time();
    }
}
