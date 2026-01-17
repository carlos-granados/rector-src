<?php

namespace Rector\Tests\Php70\Rector\FuncCall\EregToPregMatchRector\Fixture;

function skipFirstClassCallable()
{
    $callable = ereg(...);
}

?>
