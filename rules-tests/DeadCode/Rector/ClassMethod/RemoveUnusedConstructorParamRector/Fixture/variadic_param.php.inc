<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedConstructorParamRector\Fixture;

final class VariadicParam
{
    private $data;

    public function __construct($used, ...$args)
    {
        $this->data = $used;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedConstructorParamRector\Fixture;

final class VariadicParam
{
    private $data;

    public function __construct($used)
    {
        $this->data = $used;
    }
}

?>
