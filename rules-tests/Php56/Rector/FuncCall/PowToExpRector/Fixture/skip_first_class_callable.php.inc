<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function skipFirstClassCallable()
{
    $callback = pow(...);
}
