<?php

namespace Rector\Tests\Php70\Rector\Break_\BreakNotInLoopOrSwitchToReturnRector\Fixture;

function skipInDoWhileLoop()
{
    $i = 0;
    do {
        if ($i === 5) {
            break;
        }
        $i++;
    } while ($i < 10);
}

