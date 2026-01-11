<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class SkipNonBooleanIf
{
    public function go($value)
    {
        return $value ? $this->getString() : false;
    }

    private function getString(): string
    {
        return 'hello';
    }
}
