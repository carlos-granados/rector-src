<?php

namespace Rector\Tests\CodeQuality\Rector\LogicalAnd\AndAssignsToSeparateLinesRector\Fixture;

class SkipLeftNonAssign
{
    public function run()
    {
        // Should not transform - left side is not an assign
        someFunction() and $a = 1;
    }
}

?>
