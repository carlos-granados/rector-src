<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SingleInArrayToCompareRector\Fixture;

final class SkipSpreadInArgs
{
    public function run(array $args)
    {
        $isIt = in_array(...$args);
    }
}
