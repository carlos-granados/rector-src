<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function withVariables($base, $exponent)
{
    return pow($base, $exponent);
}

?>
-----
<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function withVariables($base, $exponent)
{
    return $base ** $exponent;
}

?>
