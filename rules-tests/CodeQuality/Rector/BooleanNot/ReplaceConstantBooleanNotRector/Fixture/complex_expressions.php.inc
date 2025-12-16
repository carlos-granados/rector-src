<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceConstantBooleanNotRector\Fixture;

class ComplexExpressions
{
    public function run($a, $b)
    {
        $result1 = $a && !true;
        $result2 = !false || $b;
        $result3 = $a && !false && $b;
        $result4 = !true || !false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceConstantBooleanNotRector\Fixture;

class ComplexExpressions
{
    public function run($a, $b)
    {
        $result1 = $a && false;
        $result2 = true || $b;
        $result3 = $a && true && $b;
        $result4 = false || true;
    }
}

?>
