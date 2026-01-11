<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class BooleanVariable
{
    public function go($condition, bool $value)
    {
        return $condition ? $value : false;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class BooleanVariable
{
    public function go($condition, bool $value)
    {
        return $condition && $value;
    }
}

?>
