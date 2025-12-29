<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\SwitchNegatedTernaryRector\Fixture;

class ComplexNegation
{
    public function run(bool $condition1, bool $condition2, string $value1, string $value2)
    {
        return !($condition1 && $condition2) ? $value1 : $value2;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\SwitchNegatedTernaryRector\Fixture;

class ComplexNegation
{
    public function run(bool $condition1, bool $condition2, string $value1, string $value2)
    {
        return $condition1 && $condition2 ? $value2 : $value1;
    }
}

?>
