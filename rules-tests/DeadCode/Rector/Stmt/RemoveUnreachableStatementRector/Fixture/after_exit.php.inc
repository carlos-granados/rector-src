<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class AfterExit
{
    public function run()
    {
        exit(1);

        $removeMe = 10;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class AfterExit
{
    public function run()
    {
        exit(1);
    }
}

?>
