<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function skipDifferentVariables()
{
    $x = $a === null ? 'fallback' : $b;
    $y = $c !== null ? $d : 'fallback';
}
