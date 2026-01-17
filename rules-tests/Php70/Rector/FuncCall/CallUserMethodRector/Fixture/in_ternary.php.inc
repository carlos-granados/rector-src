<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function inTernary()
{
    $obj = new stdClass();
    $result = $condition ? call_user_method('getTrue', $obj) : call_user_method('getFalse', $obj);
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\CallUserMethodRector\Fixture;

function inTernary()
{
    $obj = new stdClass();
    $result = $condition ? call_user_func([$obj, 'getTrue']) : call_user_func([$obj, 'getFalse']);
}

?>
