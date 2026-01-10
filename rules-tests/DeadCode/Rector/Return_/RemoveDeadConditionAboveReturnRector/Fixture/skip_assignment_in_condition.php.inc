<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class SkipAssignmentInCondition
{
    public function run($value)
    {
        if ($result = $value) {
            return true;
        }

        return true;
    }
}
