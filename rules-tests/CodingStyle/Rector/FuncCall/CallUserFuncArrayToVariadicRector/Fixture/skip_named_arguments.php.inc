<?php

namespace Rector\Tests\CodingStyle\Rector\FuncCall\CallUserFuncArrayToVariadicRector\Fixture;

class SkipNamedArguments
{
    public function run($items)
    {
        // Named arguments should be skipped
        call_user_func_array(callback: 'some_function', args: $items);
    }
}
