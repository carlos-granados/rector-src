<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\StrictArraySearchRector\Fixture;

class SkipExplicitlyNonStrict
{
    public function run()
    {
        // Explicitly non-strict - should not change
        array_search($value, $items, false);
    }
}

?>
