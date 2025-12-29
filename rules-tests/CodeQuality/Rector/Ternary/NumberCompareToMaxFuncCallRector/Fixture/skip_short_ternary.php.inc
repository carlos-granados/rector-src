<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\NumberCompareToMaxFuncCallRector\Fixture;

class SkipShortTernary
{
    public function run(int $value)
    {
        // Short ternary syntax: $a ?: $b
        return $value > 100 ?: 100;
    }
}
