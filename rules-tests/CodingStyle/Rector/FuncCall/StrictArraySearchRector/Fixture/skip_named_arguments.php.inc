<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\StrictArraySearchRector\Fixture;

class SkipNamedArguments
{
    public function run()
    {
        // Named arguments should be skipped
        array_search(needle: $value, haystack: $items);
    }
}

?>
