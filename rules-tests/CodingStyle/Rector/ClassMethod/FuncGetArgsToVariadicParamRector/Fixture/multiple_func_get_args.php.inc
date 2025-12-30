<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\FuncGetArgsToVariadicParamRector\Fixture;

function multipleGetArgs()
{
    $args1 = \func_get_args();
    $args2 = \func_get_args();
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\FuncGetArgsToVariadicParamRector\Fixture;

function multipleGetArgs(...$args1)
{
    $args2 = \func_get_args();
}

?>
