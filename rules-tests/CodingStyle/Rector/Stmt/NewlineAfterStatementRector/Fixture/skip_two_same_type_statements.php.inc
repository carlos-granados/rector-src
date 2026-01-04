<?php

namespace Rector\Tests\CodingStyle\Rector\Stmt\NewlineAfterStatementRector\Fixture;

class SkipTwoSameTypeStatements
{
    public function run()
    {
        echo 'first';
        echo 'second';
        return true;
    }
}

?>
