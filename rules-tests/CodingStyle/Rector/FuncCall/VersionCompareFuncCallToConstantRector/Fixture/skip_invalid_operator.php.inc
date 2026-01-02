<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\VersionCompareFuncCallToConstantRector\Fixture;

class SkipInvalidOperator
{
    public function run()
    {
        return version_compare(PHP_VERSION, '5.3.0', 'invalid');
    }
}

?>
