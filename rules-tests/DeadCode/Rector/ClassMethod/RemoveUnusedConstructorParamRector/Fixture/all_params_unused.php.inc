<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedConstructorParamRector\Fixture;

final class AllParamsUnused
{
    public function __construct($unused1, $unused2, $unused3)
    {
        // Do nothing
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUnusedConstructorParamRector\Fixture;

final class AllParamsUnused
{
    public function __construct()
    {
        // Do nothing
    }
}

?>
