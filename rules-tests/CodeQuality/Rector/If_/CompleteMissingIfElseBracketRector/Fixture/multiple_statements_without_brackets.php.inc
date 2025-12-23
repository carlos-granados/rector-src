<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CompleteMissingIfElseBracketRector\Fixture;

class MultipleStatementsWithoutBrackets
{
    public function run($value)
    {
        if ($value)
            echo 'hello';
            echo 'world';
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\If_\CompleteMissingIfElseBracketRector\Fixture;

class MultipleStatementsWithoutBrackets
{
    public function run($value)
    {
        if ($value) {
            echo 'hello';
        }
            echo 'world';
    }
}

?>
