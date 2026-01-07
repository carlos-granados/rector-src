<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class SkipNestedClosure
{
    public function run($value)
    {
        return function () use ($value) {
            return function () use ($value) {
                return $value;
            };
        };
    }
}

?>
