<?php

namespace Rector\Tests\Carbon\Rector\MethodCall\DateTimeMethodCallToCarbonRector\Fixture;

class ChainedMethodCalls
{
    public function run()
    {
        $date = (new \DateTime('today +20 day'))->format('Y-m-d')->toString();
    }
}

?>
-----
<?php

namespace Rector\Tests\Carbon\Rector\MethodCall\DateTimeMethodCallToCarbonRector\Fixture;

class ChainedMethodCalls
{
    public function run()
    {
        $date = (\Carbon\Carbon::today()->addDays(20))->format('Y-m-d')->toString();
    }
}

?>
