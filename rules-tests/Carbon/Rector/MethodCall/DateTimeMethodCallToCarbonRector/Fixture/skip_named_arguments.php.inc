<?php

namespace Rector\Tests\Carbon\Rector\MethodCall\DateTimeMethodCallToCarbonRector\Fixture;

class SkipNamedArguments
{
    public function run()
    {
        $date = (new \DateTime(datetime: 'today +20 day'))->format('Y-m-d');
    }
}
