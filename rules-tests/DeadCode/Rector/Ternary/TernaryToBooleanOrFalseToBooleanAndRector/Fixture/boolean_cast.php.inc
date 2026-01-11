<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class BooleanCast
{
    public function go($condition, $value)
    {
        return $condition ? (bool) $value : false;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class BooleanCast
{
    public function go($condition, $value)
    {
        return $condition && (bool) $value;
    }
}

?>
