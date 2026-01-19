<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function withArrayAccess($arr, $key)
{
    return isset($arr[$key]) ? $arr[$key] : 'not found';
}

?>
-----
<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function withArrayAccess($arr, $key)
{
    return $arr[$key] ?? 'not found';
}

?>
