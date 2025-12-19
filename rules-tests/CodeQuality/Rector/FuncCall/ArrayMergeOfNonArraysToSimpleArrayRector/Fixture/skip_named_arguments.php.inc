<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\ArrayMergeOfNonArraysToSimpleArrayRector\Fixture;

class SkipNamedArguments
{
    public function go()
    {
        $value = 5;
        $value2 = 10;

        return array_merge(arrays: [$value], ...[$value2]);
    }
}
