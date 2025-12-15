<?php

namespace Rector\Tests\Carbon\Rector\FuncCall\DateFuncCallToCarbonRector\Fixture;

class SkipTimeAddition
{
    public function run()
    {
        // time() addition is not handled, only subtraction
        $inTwoMinutes = time() + (60 * 2);
    }
}
