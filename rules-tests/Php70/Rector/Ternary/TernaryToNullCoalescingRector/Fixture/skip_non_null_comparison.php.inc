<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function skipNonNullComparison()
{
    $x = $a === 0 ? 'zero' : $a;
    $y = $b !== false ? $b : 'default';
    $z = $c === '' ? 'empty' : $c;
}
