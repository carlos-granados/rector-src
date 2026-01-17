<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function skipOtherFunctions()
{
    // call_user_func should not be touched
    $obj = new stdClass();
    call_user_func([$obj, 'method'], 'arg1');
}

?>
