<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function skipIssetMultipleVars()
{
    $x = isset($a, $b) ? $a : 'default';
}
