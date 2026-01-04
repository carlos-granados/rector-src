<?php

namespace Rector\Tests\CodingStyle\Rector\Stmt\NewlineAfterStatementRector\Fixture;

class SkipEmptyMethod
{
    public function emptyMethod()
    {
    }

    public function singleStatement()
    {
        return true;
    }
}

?>
