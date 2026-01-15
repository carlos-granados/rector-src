<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function inArrowFunction()
{
    return fn ($base, $exp) => pow($base, $exp);
}

?>
-----
<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function inArrowFunction()
{
    return fn ($base, $exp) => $base ** $exp;
}

?>
