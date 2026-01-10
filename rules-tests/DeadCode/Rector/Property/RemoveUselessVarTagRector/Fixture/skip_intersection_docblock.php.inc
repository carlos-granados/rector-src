<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessVarTagRector\Fixture;

use Countable;
use Iterator;

final class SkipIntersectionDocblock
{
    /**
     * @var Countable&Iterator
     */
    public object $iterator;
}
