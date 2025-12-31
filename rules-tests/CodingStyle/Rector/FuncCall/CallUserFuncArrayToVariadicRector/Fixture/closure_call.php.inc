<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CallUserFuncArrayToVariadicRector\Fixture;

class ClosureCall
{
    public function run($items)
    {
        $closure = function() {};
        call_user_func_array($closure, $items);
    }
}
