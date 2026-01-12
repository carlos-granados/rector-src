<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class SkipMultipleStmts
{
    public function run($value)
    {
        if ($value === 50) {
            doSomething();
            $value = 100;
        }

        return $value;
    }
}
