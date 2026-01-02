<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\StrictArraySearchRector\Fixture;

class SkipFirstClassCallable
{
    public function run()
    {
        // First-class callable should be skipped
        $callable = array_search(...);
    }
}

?>
