<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ConsistentImplodeRector\Fixture;

class SkipNamedArguments
{
    public function run(array $items)
    {
        // Named arguments should be skipped
        $result1 = implode(separator: '|', array: $items);
        $result2 = implode(array: $items, separator: '|');
    }
}

?>
