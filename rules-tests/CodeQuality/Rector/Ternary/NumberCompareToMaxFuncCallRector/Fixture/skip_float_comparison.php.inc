<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\NumberCompareToMaxFuncCallRector\Fixture;

class SkipFloatComparison
{
    public function run(float $value)
    {
        return $value > 100.5 ? $value : 100.5;
    }
}
