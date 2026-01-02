<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\VersionCompareFuncCallToConstantRector\Fixture;

class DifferentOperators
{
    public function run()
    {
        $a = version_compare(PHP_VERSION, '5.3.0', '>=');
        $b = version_compare(PHP_VERSION, '5.3.0', 'ge');
        $c = version_compare(PHP_VERSION, '5.3.0', '<=');
        $d = version_compare(PHP_VERSION, '5.3.0', 'le');
        $e = version_compare(PHP_VERSION, '5.3.0', '!=');
        $f = version_compare(PHP_VERSION, '5.3.0', 'ne');
        $g = version_compare(PHP_VERSION, '5.3.0', '>');
        $h = version_compare(PHP_VERSION, '5.3.0', 'gt');
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\VersionCompareFuncCallToConstantRector\Fixture;

class DifferentOperators
{
    public function run()
    {
        $a = PHP_VERSION_ID >= 50300;
        $b = PHP_VERSION_ID >= 50300;
        $c = PHP_VERSION_ID <= 50300;
        $d = PHP_VERSION_ID <= 50300;
        $e = PHP_VERSION_ID !== 50300;
        $f = PHP_VERSION_ID !== 50300;
        $g = PHP_VERSION_ID > 50300;
        $h = PHP_VERSION_ID > 50300;
    }
}

?>
