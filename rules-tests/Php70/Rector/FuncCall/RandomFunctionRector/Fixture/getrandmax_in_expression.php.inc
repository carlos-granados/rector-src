<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function getrandmaxInExpression()
{
    $max = getrandmax() / 2;
    $condition = getrandmax() > 1000;
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function getrandmaxInExpression()
{
    $max = mt_getrandmax() / 2;
    $condition = mt_getrandmax() > 1000;
}

?>
