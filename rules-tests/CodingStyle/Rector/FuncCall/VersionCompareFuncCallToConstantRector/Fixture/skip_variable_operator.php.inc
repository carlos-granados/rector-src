<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\VersionCompareFuncCallToConstantRector\Fixture;

class SkipVariableOperator
{
    public function run(string $operator)
    {
        // Variable operator should be skipped (not a String_ node)
        version_compare(PHP_VERSION, '5.3.0', $operator);
    }
}

?>
