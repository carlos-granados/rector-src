<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function skipInForLoop()
{
    for ($i = 0; $i < 10; $i++) {
        if ($i === 5) {
            break;
        }
    }
}

