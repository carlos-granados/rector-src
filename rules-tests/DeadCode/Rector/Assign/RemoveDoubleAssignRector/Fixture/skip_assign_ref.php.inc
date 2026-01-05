<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveDoubleAssignRector\Fixture;

class SkipAssignRef
{
    public function run()
    {
        $b = 5;
        $a = &$b;
        $a = $b;
    }
}

?>
