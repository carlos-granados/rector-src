<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToNullCoalescingRector\Fixture;

function skipShortTernary()
{
    $x = $a ?: 'default';
}
