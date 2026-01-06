<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedConstructorParamRector\Fixture;

class NonFinalClass
{
    private $used;

    public function __construct($used, $unused)
    {
        $this->used = $used;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedConstructorParamRector\Fixture;

class NonFinalClass
{
    private $used;

    public function __construct($used)
    {
        $this->used = $used;
    }
}

?>
