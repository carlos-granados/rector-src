<?php

namespace Rector\Tests\CodeQuality\Rector\LogicalAnd\AndAssignsToSeparateLinesRector\Fixture;

class SkipRightNonAssign
{
    public function run()
    {
        // Should not transform - right side is not an assign
        $a = 1 and someFunction();
    }
}

?>
