<?php

namespace Rector\Tests\Carbon\Rector\New_\DateTimeInstanceToCarbonRector\Fixture;

class SkipVariableDatetime
{
    public function run()
    {
        $time = 'today';
        $date = new \DateTime($time);
    }
}
