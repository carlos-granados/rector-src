<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function withPropertyAccess($obj)
{
    return $obj->value !== null ? $obj->value : 'default';
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function withPropertyAccess($obj)
{
    return $obj->value ?? 'default';
}

?>
