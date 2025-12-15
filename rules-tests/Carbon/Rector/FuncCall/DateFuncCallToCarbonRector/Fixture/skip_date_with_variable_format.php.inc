<?php

namespace Rector\Tests\Carbon\Rector\FuncCall\DateFuncCallToCarbonRector\Fixture;

class SkipDateWithVariableFormat
{
    public function run(string $format)
    {
        $date = date($format);
    }
}
