<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanNot\ReplaceConstantBooleanNotRector\Fixture;

class SkipVariables
{
    public function run($condition)
    {
        // Should NOT be changed - these are variables/expressions, not literals
        $result1 = !$condition;
        $result2 = !someFunction();
        $result3 = !$this->property;
    }
}
