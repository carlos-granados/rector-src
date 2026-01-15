<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class SkipMixedDimTypes
{
    public function run()
    {
        list($a[], $a[0]) = [1, 2];
    }
}

