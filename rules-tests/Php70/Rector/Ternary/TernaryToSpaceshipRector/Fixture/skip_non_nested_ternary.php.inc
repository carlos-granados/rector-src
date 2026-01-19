<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

function skipNonNestedTernary($a, $b)
{
    return $a < $b ? -1 : 1;
}
