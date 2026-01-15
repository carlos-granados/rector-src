<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function skipBreakTwoInNestedLoop(array $values)
{
    foreach ($values as $outer) {
        foreach ($outer as $inner) {
            if ($inner === 5) {
                break 2;
            }
        }
    }
}

