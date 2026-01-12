<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class InClosure
{
    public function run()
    {
        return function ($value) {
            if ($value === 5) {
                if ($value === 10) {
                    return 'yes';
                }
            }

            return 'no';
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class InClosure
{
    public function run()
    {
        return function ($value) {
            if ($value !== 5) {
                return 'no';
            }
            if ($value === 10) {
                return 'yes';
            }

            return 'no';
        };
    }
}

?>
