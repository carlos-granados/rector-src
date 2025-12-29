<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\NumberCompareToMaxFuncCallRector\Fixture;

class SkipMixedTypes
{
    public function run(int $value, float $threshold)
    {
        // Mixed int and float comparison
        return $value > $threshold ? $value : $threshold;
    }
}
