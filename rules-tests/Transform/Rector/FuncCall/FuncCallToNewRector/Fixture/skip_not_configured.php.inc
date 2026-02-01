<?php

namespace Rector\Tests\Transform\Rector\FuncCall\FuncCallToNewRector\Fixture;

class SkipNotConfigured
{
    public function run()
    {
        // Function not in config should not be transformed
        $array = other_function([]);
    }
}
