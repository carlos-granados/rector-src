<?php

namespace Rector\Tests\CodeQuality\Rector\For_\ForRepeatedCountToOwnVariableRector\Fixture;

class SkipGreaterComparison
{
    public function run($items)
    {
        for ($i = count($items); $i > 0; $i--) {
            echo $items[$i];
        }
    }
}
