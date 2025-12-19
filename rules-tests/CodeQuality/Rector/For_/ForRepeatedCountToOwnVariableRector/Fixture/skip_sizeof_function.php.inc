<?php

namespace Rector\Tests\CodeQuality\Rector\For_\ForRepeatedCountToOwnVariableRector\Fixture;

class SkipSizeofFunction
{
    public function run($items)
    {
        for ($i = 5; $i <= sizeof($items); $i++) {
            echo $items[$i];
        }
    }
}
