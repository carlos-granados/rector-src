<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

function skipNoElse($first, $second)
{
    if ($first === $second) {
        return 0;
    }

    return 1;
}

?>
