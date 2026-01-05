<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Fixture;

use Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Source\ParentWithBoolDefaults;

final class BooleanDefaultValues extends ParentWithBoolDefaults
{
    public function __construct()
    {
        parent::__construct('test', false, null);
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Fixture;

use Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Source\ParentWithBoolDefaults;

final class BooleanDefaultValues extends ParentWithBoolDefaults
{
    public function __construct()
    {
        parent::__construct('test');
    }
}

?>
