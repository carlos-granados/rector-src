<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

class NestedIf
{
    public function run($value)
    {
        if ($value > 10) {
            if ($value < 20) {
                return;
            }
            return;
        }
        
        return;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

class NestedIf
{
    public function run($value)
    {
        if ($value > 10) {
            if ($value < 20) {
                return;
            }
            return;
        }
    }
}

?>
