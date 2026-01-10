<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class ProtectedMethod
{
    protected function process(): void
    {
        parent::process();
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class ProtectedMethod
{
    protected function process(): void
    {
    }
}

?>
