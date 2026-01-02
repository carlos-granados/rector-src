<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\StrictArraySearchRector\Fixture;

class SkipAlreadyStrict
{
    public function run()
    {
        // Already strict - should not change
        array_search($value, $items, true);
    }
}

?>
