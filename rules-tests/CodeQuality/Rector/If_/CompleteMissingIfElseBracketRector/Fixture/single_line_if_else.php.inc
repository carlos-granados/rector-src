<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CompleteMissingIfElseBracketRector\Fixture;

class SingleLineIfElse
{
    public function run($value)
    {
        if ($value) return 1;
        else return 2;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CompleteMissingIfElseBracketRector\Fixture;

class SingleLineIfElse
{
    public function run($value)
    {
        if ($value) {
            return 1;
        } else {
            return 2;
        }
    }
}

?>
