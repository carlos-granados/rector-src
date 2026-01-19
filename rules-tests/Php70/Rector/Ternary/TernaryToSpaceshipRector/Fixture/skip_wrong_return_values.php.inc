<?php

namespace Rector\Tests\Php70\Rector\Ternary\TernaryToSpaceshipRector\Fixture;

function skipWrongReturnValues($a, $b)
{
    return ($a < $b) ? -1 : (($a > $b) ? 1 : 2);
}

function skipWrongReturnValues2($a, $b)
{
    return ($a < $b) ? 0 : (($a > $b) ? 1 : -1);
}
