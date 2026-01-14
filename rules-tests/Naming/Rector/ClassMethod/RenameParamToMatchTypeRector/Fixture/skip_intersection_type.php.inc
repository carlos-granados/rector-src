<?php

namespace Rector\Tests\Naming\Rector\ClassMethod\RenameParamToMatchTypeRector\Fixture;

use Countable;
use Iterator;

class SkipIntersectionType
{
    public function process(Countable&Iterator $collection): int
    {
        return count($collection);
    }
}
