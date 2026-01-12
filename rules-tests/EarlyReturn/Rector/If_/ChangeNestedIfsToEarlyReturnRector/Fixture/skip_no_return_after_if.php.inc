<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class SkipNoReturnAfterIf
{
    public function run($value)
    {
        if ($value === 5) {
            if ($value === 10) {
                return 'yes';
            }
        }

        echo 'something';
    }
}
