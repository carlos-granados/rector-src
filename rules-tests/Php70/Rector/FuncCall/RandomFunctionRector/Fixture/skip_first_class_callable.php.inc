<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RandomFunctionRector\Fixture;

function skipFirstClassCallable()
{
    $callable = rand(...);
    $callable2 = srand(...);
    $callable3 = getrandmax(...);
}

?>
