<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveUnusedVariableAssignRector\Fixture;

class SkipAssignOp
{
    public function run()
    {
        $value += 5;
    }
}

?>
