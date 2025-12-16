<?php

namespace Rector\Tests\Carbon\Rector\New_\DateTimeInstanceToCarbonRector\Fixture;

class SkipWithTimezone
{
    public function run()
    {
        $date = new \DateTime('today', new \DateTimeZone('UTC'));
    }
}
