<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ArraySpreadInsteadOfArrayMergeRector\FixturePhp74;

class SkipNamedArguments
{
    public function run()
    {
        $arr1 = [1, 2];
        $arr2 = [3, 4];

        // Named arguments should be skipped
        return array_merge(arrays: $arr1, $arr2);
    }
}
