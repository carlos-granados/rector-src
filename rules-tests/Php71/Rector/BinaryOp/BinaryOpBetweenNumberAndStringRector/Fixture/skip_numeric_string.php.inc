<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class SkipNumericString
{
    public function run()
    {
        $value = 5 + '123';
        $value = 5.0 + '3.14';
        $value = 5 + '-10';
    }
}
