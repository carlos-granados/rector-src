<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class ArrayAssignment
{
    public function run($condition)
    {
        if ($condition) {
            $result = ['success' => true];
        } else {
            $result = ['success' => false];
        }

        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class ArrayAssignment
{
    public function run($condition)
    {
        if ($condition) {
            return ['success' => true];
        }

        return ['success' => false];
    }
}

?>
