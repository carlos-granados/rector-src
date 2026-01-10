<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class SkipNewObjectInCondition
{
    public function run()
    {
        if (new SomeClass()) {
            return true;
        }

        return true;
    }
}
