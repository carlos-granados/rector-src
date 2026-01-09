<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class SameEchoStatements
{
    public function run($condition)
    {
        if ($condition) {
            echo 'hello';
        } else {
            echo 'hello';
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class SameEchoStatements
{
    public function run($condition)
    {
        echo 'hello';
    }
}

?>
