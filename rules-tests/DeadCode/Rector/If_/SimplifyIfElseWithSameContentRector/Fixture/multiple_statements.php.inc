<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class MultipleStatements
{
    public function run($condition)
    {
        if ($condition) {
            $a = 1;
            $b = 2;
            return $a + $b;
        } else {
            $a = 1;
            $b = 2;
            return $a + $b;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class MultipleStatements
{
    public function run($condition)
    {
        $a = 1;
        $b = 2;
        return $a + $b;
    }
}

?>
