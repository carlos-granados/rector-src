<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

class ArrowFunctionParam
{
    public function go(stdClass $var)
    {
        if ($var instanceof stdClass) {
            $callback = fn() => $var->property;
            return $callback;
        }
        return null;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

class ArrowFunctionParam
{
    public function go(stdClass $var)
    {
        $callback = fn() => $var->property;
        return $callback;
        return null;
    }
}

?>
