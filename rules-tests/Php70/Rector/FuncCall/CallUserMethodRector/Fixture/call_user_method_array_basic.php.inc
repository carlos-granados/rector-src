<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function callUserMethodArrayBasic()
{
    $obj = new stdClass();
    $args = ['arg1', 'arg2'];
    call_user_method_array('process', $obj, $args);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function callUserMethodArrayBasic()
{
    $obj = new stdClass();
    $args = ['arg1', 'arg2'];
    call_user_func_array([$obj, 'process'], $args);
}

?>
