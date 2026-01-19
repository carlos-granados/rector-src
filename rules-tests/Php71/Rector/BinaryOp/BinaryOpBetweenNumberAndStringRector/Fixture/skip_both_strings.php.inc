<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class SkipBothStrings
{
    public function run()
    {
        $value = 'hello' . 'world';
        $value = 'foo' + 'bar';
    }
}
