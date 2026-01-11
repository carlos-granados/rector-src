<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class SkipElseNotFalse
{
    public function go($value)
    {
        return $value ? $this->getBool() : null;
    }

    private function getBool(): bool
    {
        return true;
    }
}
