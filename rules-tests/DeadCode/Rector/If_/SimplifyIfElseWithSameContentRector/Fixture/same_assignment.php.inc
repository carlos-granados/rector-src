<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class SameAssignment
{
    public function run($condition)
    {
        if ($condition) {
            $result = 'value';
        } else {
            $result = 'value';
        }

        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\SimplifyIfElseWithSameContentRector\Fixture;

class SameAssignment
{
    public function run($condition)
    {
        $result = 'value';

        return $result;
    }
}

?>
