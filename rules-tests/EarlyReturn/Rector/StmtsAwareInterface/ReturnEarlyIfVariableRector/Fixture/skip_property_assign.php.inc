<?php

namespace Rector\Tests\EarlyReturn\Rector\StmtsAwareInterface\ReturnEarlyIfVariableRector\Fixture;

final class SkipPropertyAssign
{
    private $value;

    public function run()
    {
        if ($this->value === 50) {
            $this->value = 100;
        }

        return $this->value;
    }
}
