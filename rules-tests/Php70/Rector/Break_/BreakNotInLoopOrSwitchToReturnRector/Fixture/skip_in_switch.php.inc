<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function skipInSwitch(int $value)
{
    switch ($value) {
        case 1:
            echo 'one';
            break;
        case 2:
            echo 'two';
            break;
        default:
            echo 'other';
            break;
    }
}

