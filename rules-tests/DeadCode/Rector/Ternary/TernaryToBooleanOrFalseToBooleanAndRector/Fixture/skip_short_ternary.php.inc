<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class SkipShortTernary
{
    public function go(bool $value)
    {
        return $value ?: false;
    }
}
