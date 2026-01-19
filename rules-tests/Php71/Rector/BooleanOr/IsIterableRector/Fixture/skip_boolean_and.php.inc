<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class SkipBooleanAnd
{
    public function run($foo)
    {
        return is_array($foo) && $foo instanceof Traversable;
    }
}
