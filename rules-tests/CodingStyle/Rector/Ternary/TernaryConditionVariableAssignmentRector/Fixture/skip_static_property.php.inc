<?php

namespace Rector\Tests\CodingStyle\Rector\Ternary\TernaryConditionVariableAssignmentRector\Fixture;

class SkipStaticProperty
{
    private static $a;

    public function run($value)
    {
        $value ? self::$a = 1 : self::$a = 0;
    }
}
