<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class SkipFunctionCall
{
    public function run()
    {
        $value = 5 + getenv('VALUE');
    }
}
