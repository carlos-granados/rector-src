<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class SkipAlreadyReversed
{
    public function run()
    {
        list($a[], $a[]) = array_reverse([1, 2]);
    }
}

