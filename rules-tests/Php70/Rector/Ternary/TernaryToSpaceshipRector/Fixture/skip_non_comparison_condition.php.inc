<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

function skipNonComparisonCondition($a, $b) {
    // condition is equality, not < or >
    return ($a == $b) ? -1 : (($a > $b) ? 1 : 0);
}

?>
