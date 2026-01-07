<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnTagRector\Fixture;

use Exception;

final class ReturnNeverOnNever
{
    /**
     * @return never
     */
    public function resolve(): never
    {
        throw new Exception();
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnTagRector\Fixture;

use Exception;

final class ReturnNeverOnNever
{
    public function resolve(): never
    {
        throw new Exception();
    }
}

?>
