<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function inFunctionArgument()
{
    return date('Y-m-d H:i:s', mktime());
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\FuncCall\RenameMktimeWithoutArgsToTimeRector\Fixture;

function inFunctionArgument()
{
    return date('Y-m-d H:i:s', time());
}

?>
