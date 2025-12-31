<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CountArrayToEmptyArrayComparisonRector\Fixture;

class SkipCountWithMode
{
    public function run(array $items)
    {
        // count() with mode parameter should be skipped
        $result = count($items, COUNT_RECURSIVE) === 0;
    }
}

?>
