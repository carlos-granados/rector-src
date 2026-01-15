<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function inClosure()
{
    return function ($base, $exp) {
        return pow($base, $exp);
    };
}

?>
-----
<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function inClosure()
{
    return function ($base, $exp) {
        return $base ** $exp;
    };
}

?>
