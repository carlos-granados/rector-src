<?php

namespace Rector\Tests\CodeQuality\Rector\If_\ConsecutiveNullCompareReturnsToNullCoalesceQueueRector\Fixture;

class SkipIfWithElseif
{
    protected ?\stdClass $prop1 = null;
    protected ?\stdClass $prop2 = null;

    public function getProp()
    {
        if ($this->prop1 !== null) {
            return $this->prop1;
        } elseif ($this->prop2 !== null) {
            return $this->prop2;
        }
        return null;
    }
}
