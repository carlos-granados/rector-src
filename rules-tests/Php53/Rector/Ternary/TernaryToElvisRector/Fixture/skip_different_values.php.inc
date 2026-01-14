<?php

namespace Rector\Tests\Php53\Rector\Ternary\TernaryToElvisRector\Fixture;

function skipDifferentValues()
{
    $value = $a ? $b : $c;
}
