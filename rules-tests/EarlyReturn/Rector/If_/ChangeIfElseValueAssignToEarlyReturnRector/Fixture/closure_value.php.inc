<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class ClosureValue
{
    public function run($condition)
    {
        if ($condition) {
            $callback = function () {
                return 'yes';
            };
        } else {
            $callback = function () {
                return 'no';
            };
        }

        return $callback;
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class ClosureValue
{
    public function run($condition)
    {
        if ($condition) {
            return function () {
                return 'yes';
            };
        }

        return function () {
            return 'no';
        };
    }
}

?>
