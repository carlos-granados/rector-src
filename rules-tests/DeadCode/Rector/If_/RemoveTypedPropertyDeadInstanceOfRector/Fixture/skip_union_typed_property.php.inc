<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use stdClass;
use DateTime;

class SkipUnionTypedProperty
{
    private stdClass|DateTime $var;

    public function __construct()
    {
        $this->var = new stdClass;
    }

    public function go()
    {
        if ($this->var instanceof stdClass) {
            echo 'is stdClass';
            return;
        }

        echo 'is DateTime';
    }
}
