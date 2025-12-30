<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\FuncGetArgsToVariadicParamRector\Fixture;

function skipFuncGetArgsInLoop()
{
    for ($i = 0; $i < 5; $i++) {
        $args = \func_get_args();
    }
}
