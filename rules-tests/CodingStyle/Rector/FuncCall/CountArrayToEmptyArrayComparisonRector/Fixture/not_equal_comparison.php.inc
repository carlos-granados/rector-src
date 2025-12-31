<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CountArrayToEmptyArrayComparisonRector\Fixture;

class NotEqualComparison
{
    public function run(array $items)
    {
        // Should transform !== 0 as well
        $result1 = count($items) !== 0;
        $result2 = 0 !== count($items);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CountArrayToEmptyArrayComparisonRector\Fixture;

class NotEqualComparison
{
    public function run(array $items)
    {
        // Should transform !== 0 as well
        $result1 = $items !== [];
        $result2 = [] !== $items;
    }
}

?>
