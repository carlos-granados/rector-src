<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function withFunctionCall()
{
    return pow(abs(-5), strlen('abc'));
}

?>
-----
<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function withFunctionCall()
{
    return abs(-5) ** strlen('abc');
}

?>
