<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

define('BASE', 2);
define('EXPONENT', 10);

function withConstants()
{
    return pow(BASE, EXPONENT);
}

?>
-----
<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

define('BASE', 2);
define('EXPONENT', 10);

function withConstants()
{
    return BASE ** EXPONENT;
}

?>
