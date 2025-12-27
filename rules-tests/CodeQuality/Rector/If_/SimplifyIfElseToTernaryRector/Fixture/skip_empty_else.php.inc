<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfElseToTernaryRector\Fixture;

class SkipEmptyElse
{
    public function run()
    {
        // Empty else block should be skipped
        if (empty($value)) {
            $this->arrayBuilt[][$key] = true;
        } else {
        }
    }
}
