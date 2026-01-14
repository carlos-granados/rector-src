<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class ForeachInClosure
{
    public function run()
    {
        $callback = function () {
            foreach ($items as $thing) {
                echo $thing;
            }
        };
        return $callback;
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\Foreach_\RenameForeachValueVariableToMatchExprVariableRector\Fixture;

class ForeachInClosure
{
    public function run()
    {
        $callback = function () {
            foreach ($items as $item) {
                echo $item;
            }
        };
        return $callback;
    }
}

?>
