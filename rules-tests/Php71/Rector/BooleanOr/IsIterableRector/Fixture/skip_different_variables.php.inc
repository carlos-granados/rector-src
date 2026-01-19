<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

use Traversable;

class SkipDifferentVariables
{
    public function run($foo, $bar)
    {
        return is_array($foo) || $bar instanceof Traversable;
    }
}
