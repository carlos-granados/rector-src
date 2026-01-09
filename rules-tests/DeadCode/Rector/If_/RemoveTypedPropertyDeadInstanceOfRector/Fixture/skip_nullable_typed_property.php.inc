<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveTypedPropertyDeadInstanceOfRector\Fixture;

use stdClass;

class SkipNullableTypedProperty
{
    private ?stdClass $var = null;

    public function setVar(stdClass $var): void
    {
        $this->var = $var;
    }

    public function go()
    {
        if (! $this->var instanceof stdClass) {
            echo 'var is not set';
            return;
        }

        echo 'success';
    }
}
