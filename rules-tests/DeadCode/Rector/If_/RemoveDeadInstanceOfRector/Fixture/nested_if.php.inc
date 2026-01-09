<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

class NestedIf
{
    public function go(stdClass $var)
    {
        if ($this->shouldRun()) {
            if ($var instanceof stdClass) {
                return true;
            }
        }
        return false;
    }

    private function shouldRun(): bool
    {
        return true;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use stdClass;

class NestedIf
{
    public function go(stdClass $var)
    {
        if ($this->shouldRun()) {
            return true;
        }
        return false;
    }

    private function shouldRun(): bool
    {
        return true;
    }
}

?>
