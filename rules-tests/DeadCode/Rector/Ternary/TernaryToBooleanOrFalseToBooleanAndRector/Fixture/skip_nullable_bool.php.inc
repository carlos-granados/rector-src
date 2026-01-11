<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class SkipNullableBool
{
    public function go($condition)
    {
        return $condition ? $this->getNullableBool() : false;
    }

    private function getNullableBool(): ?bool
    {
        return null;
    }
}
