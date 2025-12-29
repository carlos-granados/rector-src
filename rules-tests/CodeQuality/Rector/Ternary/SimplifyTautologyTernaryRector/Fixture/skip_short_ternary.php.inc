<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\SimplifyTautologyTernaryRector\Fixture;

class SkipShortTernary
{
    public function run($value, $default)
    {
        // Short ternary syntax: $a ?: $b
        return $value !== $default ?: $default;
    }
}
