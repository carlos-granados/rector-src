<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class SkipNotIsArray
{
    public function run($foo)
    {
        return is_string($foo) || $foo instanceof Traversable;
    }
}
