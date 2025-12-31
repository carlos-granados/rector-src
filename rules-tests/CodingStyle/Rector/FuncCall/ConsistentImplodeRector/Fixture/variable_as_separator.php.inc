<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ConsistentImplodeRector\Fixture;

class VariableAsSeparator
{
    public function run(array $items, string $separator)
    {
        // When separator is a variable, should still work
        $result = implode($items, $separator);
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\ConsistentImplodeRector\Fixture;

class VariableAsSeparator
{
    public function run(array $items, string $separator)
    {
        // When separator is a variable, should still work
        $result = implode($separator, $items);
    }
}

?>
