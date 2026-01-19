<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

function skipReversedValues($a, $b) {
    // values in wrong order: 1, -1, 0 instead of -1, 1, 0
    return ($a < $b) ? 1 : (($a > $b) ? -1 : 0);
}

?>
