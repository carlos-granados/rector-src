<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfElseToTernaryRector\Fixture;

class SkipMultipleStatementsElse
{
    public function run()
    {
        // Multiple statements in else block should be skipped
        if (empty($value)) {
            $this->arrayBuilt[][$key] = true;
        } else {
            $this->arrayBuilt[][$key] = $value;
            $this->anotherVar = false;
        }
    }
}
