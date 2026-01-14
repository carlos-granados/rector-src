<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class ForeachWithBreak
{
    public function run()
    {
        foreach ($items as $thing) {
            if ($thing === 'stop') {
                break;
            }
            echo $thing;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class ForeachWithBreak
{
    public function run()
    {
        foreach ($items as $item) {
            if ($item === 'stop') {
                break;
            }
            echo $item;
        }
    }
}

?>
