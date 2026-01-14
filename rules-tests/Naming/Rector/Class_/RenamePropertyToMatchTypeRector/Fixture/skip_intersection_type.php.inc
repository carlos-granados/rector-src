<?php

namespace Rector\Tests\Naming\Rector\Class_\RenamePropertyToMatchTypeRector\Fixture;

use Countable;
use Iterator;

final class SkipIntersectionType
{
    private Countable&Iterator $something;
}
