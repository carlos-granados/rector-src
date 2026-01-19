<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function skipOtherConditions()
{
    $x = $a > 0 ? $a : 'default';
    $y = is_null($b) ? 'fallback' : $b;
    $z = empty($c) ? 'empty' : $c;
}
