<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\StrictArraySearchRector\Fixture;

class MultipleCalls
{
    public function run()
    {
        // Multiple calls should all be transformed
        $result1 = array_search($value1, $items1);
        $result2 = array_search($value2, $items2);
        $result3 = array_search($value3, $items3);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\StrictArraySearchRector\Fixture;

class MultipleCalls
{
    public function run()
    {
        // Multiple calls should all be transformed
        $result1 = array_search($value1, $items1, true);
        $result2 = array_search($value2, $items2, true);
        $result3 = array_search($value3, $items3, true);
    }
}

?>
