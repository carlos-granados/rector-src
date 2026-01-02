<?php

namespace Rector\Tests\CodingStyle\Rector\If_\NullableCompareToNullRector\Fixture;

function doubleNegation(?\stdClass $value) {
    // Double negation is not handled - should remain unchanged
    if (!!$value) {
    }
}

?>
