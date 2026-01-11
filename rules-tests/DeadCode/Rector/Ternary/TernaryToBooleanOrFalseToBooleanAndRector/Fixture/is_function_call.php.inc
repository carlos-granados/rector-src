<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class IsFunctionCall
{
    public function go($condition, $value)
    {
        return $condition ? is_array($value) : false;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class IsFunctionCall
{
    public function go($condition, $value)
    {
        return $condition && is_array($value);
    }
}

?>
