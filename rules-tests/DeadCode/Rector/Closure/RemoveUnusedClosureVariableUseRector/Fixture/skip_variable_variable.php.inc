<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class SkipVariableVariable
{
    public function run($varName)
    {
        return function () use ($varName) {
            return $$varName;
        };
    }
}

?>
