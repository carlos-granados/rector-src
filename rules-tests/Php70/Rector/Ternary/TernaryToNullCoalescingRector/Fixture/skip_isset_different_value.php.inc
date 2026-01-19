<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function skipIssetDifferentValue()
{
    $x = isset($a) ? $b : 'default';
    $y = isset($arr['key']) ? $arr['other'] : null;
}
