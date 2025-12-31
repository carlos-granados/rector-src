<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CountArrayToEmptyArrayComparisonRector\Fixture;

class SmallerComparison
{
    public function run(array $items)
    {
        // Should transform 0 < count() to !== []
        $result = 0 < count($items);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CountArrayToEmptyArrayComparisonRector\Fixture;

class SmallerComparison
{
    public function run(array $items)
    {
        // Should transform 0 < count() to !== []
        $result = [] !== $items;
    }
}

?>
