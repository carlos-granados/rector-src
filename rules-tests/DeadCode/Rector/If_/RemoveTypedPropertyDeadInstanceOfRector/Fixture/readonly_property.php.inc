<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use stdClass;

class ReadonlyProperty
{
    public function __construct(
        private readonly stdClass $var
    ) {
    }

    public function go()
    {
        if (! $this->var instanceof stdClass) {
            echo 'not stdClass';
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

class ReadonlyProperty
{
    public function __construct(
        private readonly stdClass $var
    ) {
    }

    public function go()
    {
        echo 'success';
    }
}

?>
