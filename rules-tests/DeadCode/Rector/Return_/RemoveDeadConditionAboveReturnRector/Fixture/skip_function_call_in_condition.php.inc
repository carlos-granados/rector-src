<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class SkipFunctionCallInCondition
{
    public function run($value)
    {
        if (doSomething()) {
            return true;
        }

        return true;
    }
}
