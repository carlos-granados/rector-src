<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class InstanceofCondition
{
    public function run($value)
    {
        if ($value instanceof \stdClass) {
            if ($value->id > 0) {
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

class InstanceofCondition
{
    public function run($value)
    {
        if (!$value instanceof \stdClass) {
            return 'no';
        }
        if ($value->id > 0) {
            return 'yes';
        }

        return 'no';
    }
}

?>
