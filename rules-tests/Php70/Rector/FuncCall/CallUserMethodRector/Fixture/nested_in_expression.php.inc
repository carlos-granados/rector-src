<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function nestedInExpression()
{
    $obj = new stdClass();
    $result = call_user_method('getValue', $obj) + 10;
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function nestedInExpression()
{
    $obj = new stdClass();
    $result = call_user_func([$obj, 'getValue']) + 10;
}

?>
