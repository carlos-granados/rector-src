<?php

namespace Rector\Tests\CodingStyle\Rector\Ternary\TernaryConditionVariableAssignmentRector\Fixture;

class SkipPropertyAssignment
{
    private $a;

    public function run($value)
    {
        $value ? $this->a = 1 : $this->a = 0;
    }
}
