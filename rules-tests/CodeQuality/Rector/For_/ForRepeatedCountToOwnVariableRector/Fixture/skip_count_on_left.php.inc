<?php

namespace Rector\Tests\CodeQuality\Rector\For_\ForRepeatedCountToOwnVariableRector\Fixture;

class SkipCountOnLeft
{
    public function run($items)
    {
        for ($i = 5; count($items) >= $i; $i++) {
            echo $items[$i];
        }
    }
}
