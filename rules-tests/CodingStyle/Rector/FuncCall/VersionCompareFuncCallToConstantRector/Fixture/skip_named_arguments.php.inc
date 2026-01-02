<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\VersionCompareFuncCallToConstantRector\Fixture;

class SkipNamedArguments
{
    public function run()
    {
        // Named arguments should be skipped
        version_compare(version1: PHP_VERSION, version2: '5.3.0', operator: '<');
    }
}

?>
