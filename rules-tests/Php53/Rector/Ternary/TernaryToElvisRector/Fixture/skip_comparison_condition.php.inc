<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function skipComparisonCondition()
{
    $value = $a > 0 ? $a : 0;
}
