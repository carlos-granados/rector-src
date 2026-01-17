<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function inReturn()
{
    $obj = new stdClass();
    return call_user_method('getValue', $obj);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function inReturn()
{
    $obj = new stdClass();
    return call_user_func([$obj, 'getValue']);
}

?>
