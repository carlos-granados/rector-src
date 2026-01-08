<?php

namespace Rector\Tests\DeadCode\Rector\Expression\SimplifyMirrorAssignRector\Fixture;

function skipWithSideEffects()
{
    $a = 1;
    $a = $a++;
    $b = 2;
    $b = increment($b);
}

function increment($val)
{
    return $val + 1;
}
