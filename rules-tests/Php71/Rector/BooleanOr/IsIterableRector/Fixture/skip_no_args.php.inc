<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class SkipNoArgs
{
    public function run($foo)
    {
        return is_array() || $foo instanceof Traversable;
    }
}
