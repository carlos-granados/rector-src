<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

abstract class AbstractClass
{
    public function go(stdClass $var)
    {
        if ($var instanceof stdClass) {
            return true;
        }
        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

abstract class AbstractClass
{
    public function go(stdClass $var)
    {
        return true;
        return false;
    }
}

?>
