<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\SimplifyTautologyTernaryRector\Fixture;

class SkipDifferentElse
{
    public function run($value1, $value2, $value3)
    {
        // Not a tautology - else is different from both compared values
        return $value1 !== $value2 ? $value1 : $value3;
    }
}
