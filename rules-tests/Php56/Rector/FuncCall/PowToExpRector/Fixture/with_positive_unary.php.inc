<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function withPositiveUnary()
{
    return pow(+2, +3);
}

?>
-----
<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function withPositiveUnary()
{
    return +2 ** +3;
}

?>
