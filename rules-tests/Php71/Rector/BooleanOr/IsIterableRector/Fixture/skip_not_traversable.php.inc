<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Iterator;

class SkipNotTraversable
{
    public function run($foo)
    {
        return is_array($foo) || $foo instanceof Iterator;
    }
}
