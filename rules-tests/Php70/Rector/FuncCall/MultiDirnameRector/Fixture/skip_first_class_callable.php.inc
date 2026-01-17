<?php

namespace Rector\Tests\Php70\Rector\FuncCall\MultiDirnameRector\Fixture;

function skipFirstClassCallable()
{
    $callable = dirname(...);
}

?>
