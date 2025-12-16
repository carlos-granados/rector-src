<?php

namespace Rector\Tests\Carbon\Rector\New_\DateTimeInstanceToCarbonRector\Fixture;

class SkipNamedArguments
{
    public function run()
    {
        $date = new \DateTime(datetime: 'today');
    }
}
