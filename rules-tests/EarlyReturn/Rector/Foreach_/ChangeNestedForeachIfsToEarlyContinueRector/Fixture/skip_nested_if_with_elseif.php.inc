<?php

namespace Rector\Tests\EarlyReturn\Rector\Foreach_\ChangeNestedForeachIfsToEarlyContinueRector\Fixture;

class SkipNestedIfWithElseif
{
    public function run()
    {
        $items = [];

        foreach ($values as $value) {
            if ($value === 5) {
                if ($value2 === 10) {
                    $items[] = 'ten';
                } elseif ($value2 === 20) {
                    $items[] = 'twenty';
                }
            }
        }
    }
}
