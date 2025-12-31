<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CountArrayToEmptyArrayComparisonRector\Fixture;

class SkipNamedArguments
{
    public function run(array $items)
    {
        // Named arguments should be skipped
        $result = count(value: $items) === 0;
    }
}

?>
