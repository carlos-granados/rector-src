<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class ReturnNewObject
{
    public function __construct()
    {
        if (rand(0, 1)) {
            return new \stdClass();
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class ReturnNewObject
{
    public function __construct()
    {
        if (rand(0, 1)) {
            new \stdClass();
            return;
        }
    }
}

?>
