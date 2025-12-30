<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\FuncGetArgsToVariadicParamRector\Fixture;

function skipConditional($condition)
{
    if ($condition) {
        $args = \func_get_args();
    }
}
