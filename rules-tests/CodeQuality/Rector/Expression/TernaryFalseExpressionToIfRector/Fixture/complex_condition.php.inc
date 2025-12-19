<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

class ComplexCondition
{
    public function run($a, $b, $someMethod)
    {
        $a && $b ? $someMethod->call() : false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

class ComplexCondition
{
    public function run($a, $b, $someMethod)
    {
        if ($a && $b) {
            $someMethod->call();
        }
    }
}

?>
