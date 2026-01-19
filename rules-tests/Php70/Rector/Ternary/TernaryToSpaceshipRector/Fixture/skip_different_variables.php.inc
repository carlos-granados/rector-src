<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

function skipDifferentVariables($a, $b, $c)
{
    return ($a < $b) ? -1 : (($a > $c) ? 1 : 0);
}
