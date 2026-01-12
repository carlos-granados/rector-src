<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class SkipWithElseif
{
    public function run($value)
    {
        if ($value === 50) {
            $value = 100;
        } elseif ($value === 60) {
            $value = 200;
        }

        return $value;
    }
}
