<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveDeadInstanceOfRector\Fixture;

use Countable;
use Iterator;

// Intersection types are not yet handled by the rule
class SkipIntersectionType
{
    public function go(Countable&Iterator $var)
    {
        if ($var instanceof Iterator) {
            return $var->current();
        }
        return null;
    }
}
