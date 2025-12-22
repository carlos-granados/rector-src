<?php

namespace Rector\Tests\CodeQuality\Rector\FunctionLike\SimplifyUselessVariableRector\Fixture;

function multipleAssignOps()
{
    $str = 'Hello';
    $str .= ' ';
    $str .= 'World';
    return $str;
}

function multipleNumericOps()
{
    $num = 10;
    $num += 5;
    $num *= 2;
    return $num;
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\FunctionLike\SimplifyUselessVariableRector\Fixture;

function multipleAssignOps()
{
    $str = 'Hello';
    $str .= ' ';
    return $str . 'World';
}

function multipleNumericOps()
{
    $num = 10;
    $num += 5;
    return $num * 2;
}

?>
