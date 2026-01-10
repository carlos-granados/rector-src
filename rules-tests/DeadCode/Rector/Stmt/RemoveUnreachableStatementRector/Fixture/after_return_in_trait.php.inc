<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

trait AfterReturnInTrait
{
    public function run()
    {
        return 5;

        $removeMe = 10;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

trait AfterReturnInTrait
{
    public function run()
    {
        return 5;
    }
}

?>
