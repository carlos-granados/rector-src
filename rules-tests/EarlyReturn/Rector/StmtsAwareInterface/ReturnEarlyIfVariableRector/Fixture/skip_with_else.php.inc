<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class SkipWithElse
{
    public function run($value)
    {
        if ($value === 50) {
            $value = 100;
        } else {
            $value = 200;
        }

        return $value;
    }
}
