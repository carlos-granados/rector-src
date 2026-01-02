<?php

namespace Rector\Tests\CodingStyle\Rector\If_\NullableCompareToNullRector\Fixture;

function skipIssetEmpty(?\stdClass $value) {
    // isset() and empty() have different semantics - should not be changed
    if (isset($value)) {
    }

    if (empty($value)) {
    }

    if (!isset($value)) {
    }

    if (!empty($value)) {
    }
}

?>
