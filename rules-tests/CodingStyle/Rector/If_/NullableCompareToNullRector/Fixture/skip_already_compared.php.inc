<?php

namespace Rector\Tests\CodingStyle\Rector\If_\NullableCompareToNullRector\Fixture;

function skipAlreadyCompared(?\stdClass $value) {
    // Already has explicit null comparison - should not be changed
    if ($value === null) {
    }

    if ($value !== null) {
    }
}

?>
