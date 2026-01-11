<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class SkipElseTrue
{
    public function go($condition)
    {
        return $condition ? $this->getBool() : true;
    }

    private function getBool(): bool
    {
        return false;
    }
}
