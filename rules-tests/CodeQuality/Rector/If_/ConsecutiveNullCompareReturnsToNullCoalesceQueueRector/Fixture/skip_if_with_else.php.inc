<?php

namespace Rector\Tests\CodeQuality\Rector\If_\ConsecutiveNullCompareReturnsToNullCoalesceQueueRector\Fixture;

class SkipIfWithElse
{
    protected ?\stdClass $prop1 = null;
    protected ?\stdClass $prop2 = null;

    public function getProp()
    {
        if ($this->prop1 !== null) {
            return $this->prop1;
        } else {
            echo 'prop1 is null';
        }

        if ($this->prop2 !== null) {
            return $this->prop2;
        }

        return null;
    }
}
