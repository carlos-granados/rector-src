<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ArraySpreadInsteadOfArrayMergeRector\FixturePhp74;

class NestedArrayMerge
{
    public function run()
    {
        $arr1 = [1, 2];
        $arr2 = [3, 4];
        $arr3 = [5, 6];

        // Nested array_merge
        return array_merge($arr1, array_merge($arr2, $arr3));
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ArraySpreadInsteadOfArrayMergeRector\FixturePhp74;

class NestedArrayMerge
{
    public function run()
    {
        $arr1 = [1, 2];
        $arr2 = [3, 4];
        $arr3 = [5, 6];

        // Nested array_merge
        return [...$arr1, ...[...$arr2, ...$arr3]];
    }
}

?>
