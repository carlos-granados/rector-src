<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessReturnTagRector\Fixture;

use Countable;
use Iterator;

interface CountableIterator extends Countable, Iterator
{
}

class SkipIntersectionType
{
    /**
     * @return Countable&Iterator
     */
    public function getCountableIterator(): CountableIterator
    {
    }
}

?>
