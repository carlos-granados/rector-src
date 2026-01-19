<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class SkipFirstClassCallable
{
    public function run($foo)
    {
        $fn = is_array(...);
        return $fn($foo) || $foo instanceof Traversable;
    }
}
