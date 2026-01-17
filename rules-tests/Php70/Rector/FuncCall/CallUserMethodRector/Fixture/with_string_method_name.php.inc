<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function withStringMethodName()
{
    $obj = new stdClass();
    call_user_method('doSomething', $obj);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function withStringMethodName()
{
    $obj = new stdClass();
    call_user_func([$obj, 'doSomething']);
}

?>
