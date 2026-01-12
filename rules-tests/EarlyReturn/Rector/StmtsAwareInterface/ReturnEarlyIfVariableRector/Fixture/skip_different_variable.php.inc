<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class SkipDifferentVariable
{
    public function run($value)
    {
        if ($value === 50) {
            $other = 100;
        }

        return $value;
    }
}
