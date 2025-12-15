<?php

namespace Rector\Tests\Carbon\Rector\FuncCall\DateFuncCallToCarbonRector\Fixture;

class SkipNamedArguments
{
    public function run()
    {
        $date = date(format: 'Y-m-d');
        $timestamp = strtotime(datetime: '2025-02-20');
    }
}
