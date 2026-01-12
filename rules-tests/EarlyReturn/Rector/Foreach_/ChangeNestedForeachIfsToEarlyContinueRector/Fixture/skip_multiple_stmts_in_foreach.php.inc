<?php

namespace Rector\Tests\EarlyReturn\Rector\Foreach_\ChangeNestedForeachIfsToEarlyContinueRector\Fixture;

class SkipMultipleStmtsInForeach
{
    public function run()
    {
        $items = [];

        foreach ($values as $value) {
            $processed = $value * 2;
            if ($processed === 10) {
                if ($processed > 5) {
                    $items[] = $processed;
                }
            }
        }
    }
}
