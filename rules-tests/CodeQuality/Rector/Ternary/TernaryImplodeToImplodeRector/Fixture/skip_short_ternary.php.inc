<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\TernaryImplodeToImplodeRector\Fixture;

class SkipShortTernary
{
    public function run(array $values)
    {
        return $values === [] ?: implode(',', $values);
    }
}
