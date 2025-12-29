<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\SwitchNegatedTernaryRector\Fixture;

class DoubleNegation
{
    public function run(bool $condition, string $value1, string $value2)
    {
        return !$condition ? $value1 : $value2;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\SwitchNegatedTernaryRector\Fixture;

class DoubleNegation
{
    public function run(bool $condition, string $value1, string $value2)
    {
        return $condition ? $value2 : $value1;
    }
}

?>
