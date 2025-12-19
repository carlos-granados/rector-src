<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

class ElseVariable
{
    public function run($condition, $fallback)
    {
        $condition ? doSomething() : $fallback;
    }
}

function doSomething()
{
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

class ElseVariable
{
    public function run($condition, $fallback)
    {
        if ($condition) {
            doSomething();
        }
    }
}

function doSomething()
{
}

?>
