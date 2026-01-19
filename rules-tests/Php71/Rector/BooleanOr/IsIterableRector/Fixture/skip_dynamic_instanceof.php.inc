<?php

namespace Rector\Tests\Php71\Rector\BooleanOr\IsIterableRector\Fixture;

class SkipDynamicInstanceof
{
    public function run($foo, $class)
    {
        return is_array($foo) || $foo instanceof $class;
    }
}
