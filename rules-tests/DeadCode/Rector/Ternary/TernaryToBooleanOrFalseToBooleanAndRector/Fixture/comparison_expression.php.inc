<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class ComparisonExpression
{
    public function go($condition, int $value)
    {
        return $condition ? $value > 10 : false;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Ternary\TernaryToBooleanOrFalseToBooleanAndRector\Fixture;

class ComparisonExpression
{
    public function go($condition, int $value)
    {
        return $condition && $value > 10;
    }
}

?>
