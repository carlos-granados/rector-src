<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use stdClass;

final class FinalClassProperty
{
    private stdClass $var;

    public function __construct()
    {
        $this->var = new stdClass;
    }

    public function go()
    {
        if (! $this->var instanceof stdClass) {
            return;
        }

        echo 'success';
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use stdClass;

final class FinalClassProperty
{
    private stdClass $var;

    public function __construct()
    {
        $this->var = new stdClass;
    }

    public function go()
    {
        echo 'success';
    }
}

?>
