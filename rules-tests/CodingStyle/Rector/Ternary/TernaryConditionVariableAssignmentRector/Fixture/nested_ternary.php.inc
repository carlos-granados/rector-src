<?php

namespace Rector\Tests\CodingStyle\Rector\Ternary\TernaryConditionVariableAssignmentRector\Fixture;

function nested_ternary($value, $other)
{
    $value ? ($other ? $a = 1 : $a = 2) : ($a = 3);
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\Ternary\TernaryConditionVariableAssignmentRector\Fixture;

function nested_ternary($value, $other)
{
    $a = $value ? ($other ? 1 : 2) : (3);
}

?>
