<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ArrayMergeOfNonArraysToSimpleArrayRector\Fixture;

class SkipSpreadArgument
{
    public function go()
    {
        $arrays = [[1, 2], [3, 4]];

        return array_merge(...$arrays);
    }
}
