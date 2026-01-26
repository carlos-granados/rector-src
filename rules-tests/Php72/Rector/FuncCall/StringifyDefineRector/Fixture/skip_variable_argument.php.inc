<?php

namespace Rector\Tests\Php72\Rector\FuncCall\StringifyDefineRector\Fixture;

class SkipVariableArgument
{
    public function run()
    {
        $name = 'SOME_CONST';
        define($name, 'value');
    }
}
