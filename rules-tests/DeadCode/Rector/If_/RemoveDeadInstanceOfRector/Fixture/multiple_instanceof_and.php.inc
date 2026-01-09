<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;
use DateTime;

class MultipleInstanceofAnd
{
    public function go(stdClass $var1, DateTime $var2)
    {
        if ($var1 instanceof stdClass && $var2 instanceof DateTime) {
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
use DateTime;

class MultipleInstanceofAnd
{
    public function go(stdClass $var1, DateTime $var2)
    {
        if ($var2 instanceof DateTime) {
            return true;
        }
        return false;
    }
}

?>
