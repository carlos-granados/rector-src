<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class ReturnConstants
{
    private const SUCCESS = 1;

    public function __construct()
    {
        if (rand(0, 1)) {
            return self::SUCCESS;
        }

        if (rand(2, 3)) {
            return null;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class ReturnConstants
{
    private const SUCCESS = 1;

    public function __construct()
    {
        if (rand(0, 1)) {
            return;
        }

        if (rand(2, 3)) {
            return;
        }
    }
}

?>
