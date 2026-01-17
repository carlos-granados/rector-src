<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

function skipNonZeroReturn($first, $second)
{
    if ($first === $second) {
        return 1;
    }

    return ($first < $second) ? 1 : -1;
}

?>
