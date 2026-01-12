<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class SkipNoElse
{
    public function run($condition)
    {
        $value = 'default';
        if ($condition) {
            $value = 'changed';
        }

        return $value;
    }
}
