<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadIfForeachForRector\Fixture;

class SkipPreIncrement
{
    public function run($value)
    {
        if ($value++) {
        }
        
        echo $value;
    }
}
