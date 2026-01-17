<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function withMultipleArgs()
{
    $obj = new stdClass();
    call_user_method('method', $obj, 'arg1', 'arg2', 'arg3');
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function withMultipleArgs()
{
    $obj = new stdClass();
    call_user_func([$obj, 'method'], 'arg1', 'arg2', 'arg3');
}

?>
