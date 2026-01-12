<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class BooleanOrCondition
{
    public function run($a, $b, $c)
    {
        if ($a || $b) {
            if ($c) {
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

class BooleanOrCondition
{
    public function run($a, $b, $c)
    {
        if (!($a || $b)) {
            return 'no';
        }
        if ($c) {
            return 'yes';
        }

        return 'no';
    }
}

?>
