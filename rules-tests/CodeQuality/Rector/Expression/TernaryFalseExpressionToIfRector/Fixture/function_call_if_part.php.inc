<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

function functionCallIfPart($condition)
{
    $condition ? doSomething() : false;
}

function doSomething()
{
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Expression\TernaryFalseExpressionToIfRector\Fixture;

function functionCallIfPart($condition)
{
    if ($condition) {
        doSomething();
    }
}

function doSomething()
{
}

?>
