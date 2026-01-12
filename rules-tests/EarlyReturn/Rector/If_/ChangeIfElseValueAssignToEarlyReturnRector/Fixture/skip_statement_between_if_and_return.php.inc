<?php

namespace Rector\Tests\EarlyReturn\Rector\If_\ChangeIfElseValueAssignToEarlyReturnRector\Fixture;

class SkipStatementBetweenIfAndReturn
{
    public function run($condition)
    {
        if ($condition) {
            $value = 'yes';
        } else {
            $value = 'no';
        }

        $this->doSomething();

        return $value;
    }
}
