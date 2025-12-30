<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ArraySpreadInsteadOfArrayMergeRector\FixturePhp74;

class SingleArgument
{
    public function run()
    {
        $arr = [1, 2, 3];

        // Single argument array_merge
        return array_merge($arr);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ArraySpreadInsteadOfArrayMergeRector\FixturePhp74;

class SingleArgument
{
    public function run()
    {
        $arr = [1, 2, 3];

        // Single argument array_merge
        return [...$arr];
    }
}

?>
