<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CompleteMissingIfElseBracketRector\Fixture;

class NestedIfWithoutBrackets
{
    public function run($value, $value2)
    {
        if ($value)
            if ($value2)
                return 1;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CompleteMissingIfElseBracketRector\Fixture;

class NestedIfWithoutBrackets
{
    public function run($value, $value2)
    {
        if ($value) {
            if ($value2) {
                return 1;
            }
        }
    }
}

?>
