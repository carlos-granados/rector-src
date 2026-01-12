<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class NegatedCondition
{
    public function run($value)
    {
        if (!$value) {
            if ($value !== 10) {
                return 'yes';
            }
        }

        return 'no';
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class NegatedCondition
{
    public function run($value)
    {
        if ($value) {
            return 'no';
        }
        if ($value !== 10) {
            return 'yes';
        }

        return 'no';
    }
}

?>
