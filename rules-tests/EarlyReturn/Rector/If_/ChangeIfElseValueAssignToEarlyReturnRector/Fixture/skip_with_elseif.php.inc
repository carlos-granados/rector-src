<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class SkipWithElseif
{
    public function run($condition)
    {
        if ($condition === 1) {
            $value = 'one';
        } elseif ($condition === 2) {
            $value = 'two';
        } else {
            $value = 'other';
        }

        return $value;
    }
}
