<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function skipEqualComparison()
{
    $x = $a == null ? 'fallback' : $a;
    $y = $b != null ? $b : 'fallback';
}
