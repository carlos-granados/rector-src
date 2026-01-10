<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class InClosure
{
    public function run()
    {
        return function () {
            return 5;

            $removeMe = 10;
        };
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class InClosure
{
    public function run()
    {
        return function () {
            return 5;
        };
    }
}

?>
