<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class SkipNotNextStmt
{
    public function run($value)
    {
        if ($value === 50) {
            $value = 100;
        }

        doSomething();

        return $value;
    }
}
