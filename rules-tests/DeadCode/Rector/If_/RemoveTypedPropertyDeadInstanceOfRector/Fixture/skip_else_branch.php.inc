<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use stdClass;

class SkipElseBranch
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
        } else {
            echo 'not stdClass';
        }
    }
}
