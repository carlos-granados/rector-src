<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class ForeachWithBreak
{
    public function run(array $items)
    {
        foreach ($items as $item) {
            break;

            $removeMe = 10;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class ForeachWithBreak
{
    public function run(array $items)
    {
        foreach ($items as $item) {
            break;
        }
    }
}

?>
