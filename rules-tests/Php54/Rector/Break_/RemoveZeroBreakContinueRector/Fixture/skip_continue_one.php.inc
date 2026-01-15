<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function skipContinueOne()
{
    foreach ([1, 2, 3] as $item) {
        continue 1;
    }
}

?>
