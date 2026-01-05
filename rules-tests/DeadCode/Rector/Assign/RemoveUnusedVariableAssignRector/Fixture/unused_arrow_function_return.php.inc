<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveUnusedVariableAssignRector\Fixture;

class UnusedArrowFunctionReturn
{
    public function run()
    {
        $value = fn() => 5;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveUnusedVariableAssignRector\Fixture;

class UnusedArrowFunctionReturn
{
    public function run()
    {
    }
}

?>
