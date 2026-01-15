<?php

namespace Rector\Tests\Php70\Rector\Assign\ListSwapArrayOrderRector\Fixture;

class SkipRegularVariable
{
    public function run()
    {
        list($a, $b) = [1, 2];
    }
}

