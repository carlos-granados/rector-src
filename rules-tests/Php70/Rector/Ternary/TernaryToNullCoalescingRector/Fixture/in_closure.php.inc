<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

$closure = function ($value) {
    return isset($value) ? $value : 'default';
};

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

$closure = function ($value) {
    return $value ?? 'default';
};

?>
