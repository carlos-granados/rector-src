<?php

namespace Rector\Tests\CodingStyle\Rector\If_\NullableCompareToNullRector\Fixture;

function skipComplexBoolean(?\stdClass $value, bool $other) {
    // Complex boolean expressions should not be transformed
    if (!$value && $other) {
    }

    if ($value || $other) {
    }

    if (!$value || $other) {
    }
}

?>
