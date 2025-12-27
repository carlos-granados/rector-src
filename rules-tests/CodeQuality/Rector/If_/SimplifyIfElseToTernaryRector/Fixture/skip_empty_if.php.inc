<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfElseToTernaryRector\Fixture;

class SkipEmptyIf
{
    public function run()
    {
        // Empty if block should be skipped
        if (empty($value)) {
        } else {
            $this->arrayBuilt[][$key] = $value;
        }
    }
}
