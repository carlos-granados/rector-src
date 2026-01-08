<?php

namespace Rector\Tests\DeadCode\Rector\Expression\SimplifyMirrorAssignRector\Fixture;

function skipDifferentVariables()
{
    $a = 1;
    $b = 2;
    $a = $b;
}
