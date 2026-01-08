<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadContinueRector\Fixture;

class NestedLoopsInner
{
    public function run($values)
    {
        foreach ($values as $outer) {
            foreach ($outer as $inner) {
                echo $inner;
                continue;
            }
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\For_\RemoveDeadContinueRector\Fixture;

class NestedLoopsInner
{
    public function run($values)
    {
        foreach ($values as $outer) {
            foreach ($outer as $inner) {
                echo $inner;
            }
        }
    }
}

?>
