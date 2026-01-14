<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class ForeachWithContinue
{
    public function run()
    {
        foreach ($items as $thing) {
            if ($thing === null) {
                continue;
            }
            echo $thing;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class ForeachWithContinue
{
    public function run()
    {
        foreach ($items as $item) {
            if ($item === null) {
                continue;
            }
            echo $item;
        }
    }
}

?>
