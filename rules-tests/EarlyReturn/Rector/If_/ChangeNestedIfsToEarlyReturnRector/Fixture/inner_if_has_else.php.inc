<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class InnerIfHasElse
{
    public function run($value)
    {
        if ($value === 5) {
            if ($value === 10) {
                return 'yes';
            } else {
                return 'inner-else';
            }
        }

        return 'no';
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class InnerIfHasElse
{
    public function run($value)
    {
        if ($value !== 5) {
            return 'no';
        }
        if ($value === 10) {
            return 'yes';
        } else {
            return 'inner-else';
        }

        return 'no';
    }
}

?>
