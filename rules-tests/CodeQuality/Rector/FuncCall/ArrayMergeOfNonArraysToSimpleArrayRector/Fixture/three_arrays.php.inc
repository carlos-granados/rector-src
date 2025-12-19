<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ArrayMergeOfNonArraysToSimpleArrayRector\Fixture;

class ThreeArrays
{
    public function go()
    {
        $value = 5;
        $value2 = 10;
        $value3 = 15;

        return array_merge([$value], [$value2], [$value3]);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ArrayMergeOfNonArraysToSimpleArrayRector\Fixture;

class ThreeArrays
{
    public function go()
    {
        $value = 5;
        $value2 = 10;
        $value3 = 15;

        return [$value, $value2, $value3];
    }
}

?>
