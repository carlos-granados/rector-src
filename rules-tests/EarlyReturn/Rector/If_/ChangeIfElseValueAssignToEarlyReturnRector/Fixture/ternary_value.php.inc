<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class TernaryValue
{
    public function run($condition)
    {
        if ($condition) {
            $value = true ? 'yes' : 'no';
        } else {
            $value = false ? 'yes' : 'no';
        }

        return $value;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class TernaryValue
{
    public function run($condition)
    {
        if ($condition) {
            return true ? 'yes' : 'no';
        }

        return false ? 'yes' : 'no';
    }
}

?>
