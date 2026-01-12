<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class SkipReturnWithExpression
{
    public function run($condition)
    {
        if ($condition) {
            $value = 10;
        } else {
            $value = 20;
        }

        return $value + 5;
    }
}
