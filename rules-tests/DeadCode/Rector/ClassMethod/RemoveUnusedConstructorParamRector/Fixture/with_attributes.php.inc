<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedConstructorParamRector\Fixture;

final class WithAttributes
{
    private $used;

    public function __construct(
        #[\SomeAttribute]
        $used,
        #[\AnotherAttribute]
        $unused
    ) {
        $this->used = $used;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedConstructorParamRector\Fixture;

final class WithAttributes
{
    private $used;

    public function __construct(
        #[\SomeAttribute]
        $used
    ) {
        $this->used = $used;
    }
}

?>
