<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

$fn = fn($value) => $value !== null ? $value : 'default';

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

$fn = fn($value) => $value ?? 'default';

?>
