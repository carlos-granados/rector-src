<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class SkipByReferenceUsed
{
    public function run($value)
    {
        return function () use (&$value) {
            $value = 100;
            return $value;
        };
    }
}

?>
