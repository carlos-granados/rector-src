<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class ReturnInTryCatch
{
    public function __construct()
    {
        try {
            $this->init();
            return true;
        } catch (\Exception $e) {
            return false;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class ReturnInTryCatch
{
    public function __construct()
    {
        try {
            $this->init();
            return;
        } catch (\Exception $e) {
            return;
        }
    }
}

?>
