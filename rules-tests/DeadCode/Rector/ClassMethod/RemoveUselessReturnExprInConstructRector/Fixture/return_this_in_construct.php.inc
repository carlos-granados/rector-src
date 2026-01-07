<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class ReturnThisInConstruct
{
    public function __construct()
    {
        if (rand(0, 1)) {
            $this->init();
            return $this;
        }
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnExprInConstructRector\Fixture;

final class ReturnThisInConstruct
{
    public function __construct()
    {
        if (rand(0, 1)) {
            $this->init();
            $this;
            return;
        }
    }
}

?>
