<?php

namespace Rector\Tests\DeadCode\Rector\Closure\RemoveUnusedClosureVariableUseRector\Fixture;

class SkipGetDefinedVars
{
    public function run($value)
    {
        return function () use ($value) {
            $vars = get_defined_vars();
            return $vars;
        };
    }
}

?>
