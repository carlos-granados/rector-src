<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ArraySpreadInsteadOfArrayMergeRector\FixturePhp74;

class SkipEmptyArrayMerge
{
    public function run()
    {
        // Empty array_merge should be skipped
        return array_merge();
    }
}
