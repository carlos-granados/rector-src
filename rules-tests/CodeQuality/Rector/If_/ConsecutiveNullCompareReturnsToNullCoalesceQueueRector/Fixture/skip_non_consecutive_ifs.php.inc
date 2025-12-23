<?php

namespace Rector\Tests\CodeQuality\Rector\If_\ConsecutiveNullCompareReturnsToNullCoalesceQueueRector\Fixture;

class SkipNonConsecutiveIfs
{
    protected ?\stdClass $prop1 = null;
    protected ?\stdClass $prop2 = null;

    public function getProp()
    {
        if ($this->prop1 !== null) {
            return $this->prop1;
        }

        echo 'Between ifs';

        if ($this->prop2 !== null) {
            return $this->prop2;
        }

        return null;
    }
}
