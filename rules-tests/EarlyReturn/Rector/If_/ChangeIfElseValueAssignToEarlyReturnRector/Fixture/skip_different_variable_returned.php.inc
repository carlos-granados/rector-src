<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class SkipDifferentVariableReturned
{
    public function run($condition)
    {
        if ($condition) {
            $value = 'yes';
        } else {
            $value = 'no';
        }

        return $otherValue;
    }
}
