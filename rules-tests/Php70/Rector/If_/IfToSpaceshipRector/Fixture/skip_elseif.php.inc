<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

function skipElseif($first, $second)
{
    if ($first === $second) {
        return 0;
    } elseif ($first > $second) {
        return 1;
    } else {
        return -1;
    }
}

?>
