<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class SkipNonExpressionInIf
{
    public function run($value)
    {
        if ($value === 50) {
            return 100;
        }

        return $value;
    }
}
