<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use stdClass;

class SkipWhileLoop
{
    private stdClass $var;

    public function __construct()
    {
        $this->var = new stdClass;
    }

    public function go()
    {
        while (true) {
            if (! $this->var instanceof stdClass) {
                break;
            }
            echo 'running';
        }
    }
}
