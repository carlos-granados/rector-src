<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

class SkipUnknownFunction
{
    public function run()
    {
        return unknown_function_that_does_not_exist(1, 2, 3);
    }
}
