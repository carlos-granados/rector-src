<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

final class FinalClass
{
    public function __construct()
    {
        parent::__construct();
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

final class FinalClass
{
    public function __construct()
    {
    }
}

?>
