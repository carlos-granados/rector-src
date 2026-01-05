<?php

namespace Rector\Tests\CodingStyle\Rector\Ternary\TernaryConditionVariableAssignmentRector\Fixture;

function skip_array_assignment($value)
{
    $value ? $arr[0] = 1 : $arr[0] = 0;
}
