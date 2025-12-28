<?php

namespace Rector\Tests\CodeQuality\Rector\LogicalAnd\AndAssignsToSeparateLinesRector\Fixture;

class SkipMixedAssignAndCall
{
    public function run()
    {
        // Should not transform - middle part is not an assign
        $a = 1 and someFunction() and $c = 3;
    }
}

?>
