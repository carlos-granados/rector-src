<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\UnnecessaryTernaryExpressionRector\Fixture;

final class ComplexCondition
{
    public function run($a, $b, $c)
    {
        // Complex condition with multiple comparisons
        $result = ($a === $b && $b === $c) ? true : false;
        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\UnnecessaryTernaryExpressionRector\Fixture;

final class ComplexCondition
{
    public function run($a, $b, $c)
    {
        // Complex condition with multiple comparisons
        $result = $a === $b && $b === $c;
        return $result;
    }
}

?>
