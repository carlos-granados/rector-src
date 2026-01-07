<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class MultipleReturns
{
    public function __construct()
    {
        if (rand(0, 1)) {
            return true;
        }

        if (rand(2, 3)) {
            return false;
        }

        return 123;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class MultipleReturns
{
    public function __construct()
    {
        if (rand(0, 1)) {
            return;
        }

        if (rand(2, 3)) {
            return;
        }

        return;
    }
}

?>
