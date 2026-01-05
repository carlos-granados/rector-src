<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveUnusedVariableAssignRector\Fixture;

class UnusedMatchExpression
{
    public function run($status)
    {
        $value = match($status) {
            1 => 'one',
            2 => 'two',
            default => 'unknown'
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveUnusedVariableAssignRector\Fixture;

class UnusedMatchExpression
{
    public function run($status)
    {
    }
}

?>
