<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SingleInArrayToCompareRector\Fixture;

final class SkipInsufficientArgs
{
    public function run()
    {
        // in_array with less than 2 arguments is invalid but should not crash
        $isIt = in_array($value);
    }
}
