<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function withVariableObject()
{
    $factory = new Factory();
    $object = $factory->create();
    call_user_method('process', $object, $data);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function withVariableObject()
{
    $factory = new Factory();
    $object = $factory->create();
    call_user_func([$object, 'process'], $data);
}

?>
