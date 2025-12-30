<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\FuncGetArgsToVariadicParamRector\Fixture;

function arrayAssign()
{
    $data['args'] = \func_get_args();
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\FuncGetArgsToVariadicParamRector\Fixture;

function arrayAssign(...$args)
{
    $data['args'] = $args;
}

?>
