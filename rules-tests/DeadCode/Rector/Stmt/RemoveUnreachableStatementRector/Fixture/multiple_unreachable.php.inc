<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class MultipleUnreachable
{
    public function run()
    {
        return 5;

        $a = 1;
        $b = 2;
        $c = 3;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class MultipleUnreachable
{
    public function run()
    {
        return 5;
    }
}

?>
