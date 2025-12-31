<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ConsistentImplodeRector\Fixture;

class MultipleArguments
{
    public function run(array $items)
    {
        // Three or more arguments - should be left unchanged (invalid PHP)
        $result = implode($items, '|', 'extra');
    }
}

?>
