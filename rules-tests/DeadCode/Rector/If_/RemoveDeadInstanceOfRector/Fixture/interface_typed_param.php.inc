<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use Countable;

class InterfaceTypedParam
{
    public function go(Countable $var)
    {
        if ($var instanceof Countable) {
            return count($var);
        }
        return 0;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use Countable;

class InterfaceTypedParam
{
    public function go(Countable $var)
    {
        return count($var);
        return 0;
    }
}

?>
