<?php

namespace Rector\Tests\DeadCode\Rector\Return_\RemoveDeadConditionAboveReturnRector\Fixture;

class SkipStaticCallInCondition
{
    public function run()
    {
        if (SomeClass::check()) {
            return true;
        }

        return true;
    }
}
