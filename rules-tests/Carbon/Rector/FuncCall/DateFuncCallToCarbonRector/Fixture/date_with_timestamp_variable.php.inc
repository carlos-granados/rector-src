<?php

namespace Rector\Tests\Carbon\Rector\FuncCall\DateFuncCallToCarbonRector\Fixture;

class DateWithTimestampVariable
{
    public function run(int $timestamp)
    {
        $formatted = date('Y-m-d', $timestamp);
    }
}

?>
-----
<?php

namespace Rector\Tests\Carbon\Rector\FuncCall\DateFuncCallToCarbonRector\Fixture;

class DateWithTimestampVariable
{
    public function run(int $timestamp)
    {
        $formatted = \Carbon\Carbon::createFromTimestamp($timestamp)->format('Y-m-d');
    }
}

?>
