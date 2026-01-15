<?php

namespace Rector\Tests\Php54\Rector\Break_\RemoveZeroBreakContinueRector\Fixture;

function skipNoArgument()
{
    foreach ([1, 2, 3] as $item) {
        break;
        continue;
    }
}

?>
