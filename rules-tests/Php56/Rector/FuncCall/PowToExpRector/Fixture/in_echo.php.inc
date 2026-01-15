<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function inEcho()
{
    echo pow(2, 8);
}

?>
-----
<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function inEcho()
{
    echo 2 ** 8;
}

?>
