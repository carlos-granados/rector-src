<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function withMethodResultAsObject()
{
    call_user_method('execute', getObject(), 'arg1');
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function withMethodResultAsObject()
{
    call_user_func([getObject(), 'execute'], 'arg1');
}

?>
