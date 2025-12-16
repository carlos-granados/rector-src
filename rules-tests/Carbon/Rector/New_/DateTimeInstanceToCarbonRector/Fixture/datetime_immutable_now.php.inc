<?php

namespace Rector\Tests\Carbon\Rector\New_\DateTimeInstanceToCarbonRector\Fixture;

class DatetimeImmutableNow
{
    public function run()
    {
        $date = new \DateTimeImmutable();
    }
}

?>
-----
<?php

namespace Rector\Tests\Carbon\Rector\New_\DateTimeInstanceToCarbonRector\Fixture;

class DatetimeImmutableNow
{
    public function run()
    {
        $date = \Carbon\CarbonImmutable::now();
    }
}

?>
