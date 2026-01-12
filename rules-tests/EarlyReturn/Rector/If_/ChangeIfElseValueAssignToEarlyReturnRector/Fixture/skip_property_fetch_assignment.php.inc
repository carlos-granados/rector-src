<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class SkipPropertyFetchAssignment
{
    private $value;

    public function run($condition)
    {
        if ($condition) {
            $this->value = 'changed';
        } else {
            $this->value = 'default';
        }

        return $this->value;
    }
}
