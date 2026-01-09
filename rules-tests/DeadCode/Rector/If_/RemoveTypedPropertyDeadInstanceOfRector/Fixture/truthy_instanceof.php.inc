<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use stdClass;

class TruthyInstanceof
{
    private stdClass $var;

    public function __construct()
    {
        $this->var = new stdClass;
    }

    public function go()
    {
        if ($this->var instanceof stdClass) {
            echo 'is stdClass';
            return true;
        }

        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use stdClass;

class TruthyInstanceof
{
    private stdClass $var;

    public function __construct()
    {
        $this->var = new stdClass;
    }

    public function go()
    {
        echo 'is stdClass';
        return true;
        return false;
    }
}

?>
