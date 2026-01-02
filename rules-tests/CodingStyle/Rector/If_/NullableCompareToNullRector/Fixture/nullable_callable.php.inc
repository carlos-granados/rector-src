<?php

namespace Rector\Tests\CodingStyle\Rector\If_\NullableCompareToNullRector\Fixture;

function nullableCallable(?callable $callback) {
    if ($callback) {
    }

    if (!$callback) {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodingStyle\Rector\If_\NullableCompareToNullRector\Fixture;

function nullableCallable(?callable $callback) {
    if ($callback !== null) {
    }

    if ($callback === null) {
    }
}

?>
