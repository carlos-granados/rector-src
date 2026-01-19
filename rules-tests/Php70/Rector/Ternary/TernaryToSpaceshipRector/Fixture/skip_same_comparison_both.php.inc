<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

function skipSameComparisonBoth($a, $b) {
    // both ternaries use < comparison, should skip
    return ($a < $b) ? -1 : (($a < $b) ? 1 : 0);
}

?>
