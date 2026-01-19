<?php

namespace Rector\Tests\Php71\Rector\BinaryOp\BinaryOpBetweenNumberAndStringRector\Fixture;

class SkipBothNumbers
{
    public function run()
    {
        $value = 5 + 10;
        $value = 3.14 * 2.0;
        $value = 100 - 50;
    }
}
