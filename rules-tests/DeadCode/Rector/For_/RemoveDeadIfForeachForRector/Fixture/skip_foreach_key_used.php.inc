<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadIfForeachForRector\Fixture;

class SkipForeachKeyUsed
{
    public function run($values)
    {
        foreach ($values as $key => $value) {
        }
        
        echo $key;
    }
}
