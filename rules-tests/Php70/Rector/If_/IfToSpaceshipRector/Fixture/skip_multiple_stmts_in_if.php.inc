<?php

namespace Rector\Tests\Php70\Rector\If_\IfToSpaceshipRector\Fixture;

function skipMultipleStmtsInIf($first, $second)
{
    if ($first === $second) {
        $log = 'equal';
        return 0;
    }

    return ($first < $second) ? 1 : -1;
}

?>
