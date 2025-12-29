<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\UnnecessaryTernaryExpressionRector\Fixture;

final class SkipShortTernary
{
    public function run($value)
    {
        // Short ternary syntax should not be transformed
        return $value ?: false;
    }
}
