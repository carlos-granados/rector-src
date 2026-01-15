<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function skipInWhileLoop()
{
    $i = 0;
    while ($i < 10) {
        if ($i === 5) {
            break;
        }
        $i++;
    }
}

