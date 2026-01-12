<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeNestedIfsToEarlyReturnRector\Fixture;

class SkipMultipleStmtsInIf
{
    public function run($value)
    {
        if ($value === 5) {
            $something = 'modified';
            if ($value === 10) {
                return 'yes';
            }
        }

        return 'no';
    }
}
