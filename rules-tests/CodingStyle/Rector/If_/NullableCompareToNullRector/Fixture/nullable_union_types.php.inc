<?php

namespace Rector\Tests\CodingStyle\Rector\If_\NullableCompareToNullRector\Fixture;

function nullableUnionTypes(\stdClass|\DateTime|null $value) {
    if ($value) {
    }

    if (!$value) {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\If_\NullableCompareToNullRector\Fixture;

function nullableUnionTypes(\stdClass|\DateTime|null $value) {
    if ($value !== null) {
    }

    if ($value === null) {
    }
}

?>
