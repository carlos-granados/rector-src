<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

class ClosureParam
{
    public function go()
    {
        $callback = function (stdClass $var) {
            if (! $var instanceof stdClass) {
                return false;
            }
            return true;
        };
        return $callback;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

class ClosureParam
{
    public function go()
    {
        $callback = function (stdClass $var) {
            return true;
        };
        return $callback;
    }
}

?>
