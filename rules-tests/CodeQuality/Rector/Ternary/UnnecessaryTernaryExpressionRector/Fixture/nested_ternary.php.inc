<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\UnnecessaryTernaryExpressionRector\Fixture;

final class NestedTernary
{
    public function run($a, $b, $c)
    {
        // Nested ternary - should only simplify the outer one
        $result = ($a === $b ? true : false) ? $c : false;
        return $result;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\UnnecessaryTernaryExpressionRector\Fixture;

final class NestedTernary
{
    public function run($a, $b, $c)
    {
        // Nested ternary - should only simplify the outer one
        $result = ($a === $b) ? $c : false;
        return $result;
    }
}

?>
