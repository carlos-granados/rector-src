<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function skipBreakTwo()
{
    foreach ([1, 2, 3] as $item) {
        foreach ([4, 5, 6] as $inner) {
            break 2;
        }
    }
}

?>
