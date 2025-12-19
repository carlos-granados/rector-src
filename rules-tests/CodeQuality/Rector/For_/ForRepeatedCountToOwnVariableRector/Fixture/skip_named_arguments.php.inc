<?php

namespace Rector\Tests\CodeQuality\Rector\For_\ForRepeatedCountToOwnVariableRector\Fixture;

class SkipNamedArguments
{
    public function run($items)
    {
        for ($i = 5; $i <= count(value: $items); $i++) {
            echo $items[$i];
        }
    }
}
