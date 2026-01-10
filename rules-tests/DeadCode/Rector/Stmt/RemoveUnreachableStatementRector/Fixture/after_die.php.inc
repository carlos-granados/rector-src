<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class AfterDie
{
    public function run()
    {
        die('error');

        $removeMe = 10;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class AfterDie
{
    public function run()
    {
        die('error');
    }
}

?>
