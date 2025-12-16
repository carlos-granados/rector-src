<?php

namespace Rector\Tests\Carbon\Rector\MethodCall\DateTimeMethodCallToCarbonRector\Fixture;

class SkipVariableFormat
{
    public function run()
    {
        $format = 'today +20 day';
        $date = (new \DateTime($format))->format('Y-m-d');
    }
}
