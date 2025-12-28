<?php

namespace Rector\Tests\CodeQuality\Rector\LogicalAnd\AndAssignsToSeparateLinesRector\Fixture;

class NestedLogicalAnd
{
    public function run()
    {
        $a = 1 and $b = 2 and $c = 3;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\LogicalAnd\AndAssignsToSeparateLinesRector\Fixture;

class NestedLogicalAnd
{
    public function run()
    {
        $a = 1;
        $b = 2;
        $c = 3;
    }
}

?>
