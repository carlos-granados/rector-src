<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceMultipleBooleanNotRector\Fixture;

class ComplexExpressions
{
    public function run($a, $b)
    {
        $result1 = $a && !!$b;
        $result2 = !!$a || $b;
        $result3 = !!!$a && !!$b;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceMultipleBooleanNotRector\Fixture;

class ComplexExpressions
{
    public function run($a, $b)
    {
        $result1 = $a && (bool) $b;
        $result2 = (bool) $a || $b;
        $result3 = !$a && (bool) $b;
    }
}

?>
