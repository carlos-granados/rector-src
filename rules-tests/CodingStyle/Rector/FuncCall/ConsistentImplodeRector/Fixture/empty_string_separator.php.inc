<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ConsistentImplodeRector\Fixture;

class EmptyStringSeparator
{
    public function run(array $items)
    {
        // Should not change - already correct format
        $result = implode('', $items);
    }
}

?>
