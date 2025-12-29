<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\SimplifyTautologyTernaryRector\Fixture;

class SkipDifferentIf
{
    public function run($value1, $value2, $value3)
    {
        // Not a tautology - if is different from both compared values
        return $value1 !== $value2 ? $value3 : $value2;
    }
}
