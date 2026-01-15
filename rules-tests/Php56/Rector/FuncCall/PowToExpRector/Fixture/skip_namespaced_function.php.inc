<?php

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

namespace Some\Custom;

function pow($a, $b)
{
    return $a * $b;
}

namespace Rector\Tests\Php56\Rector\FuncCall\PowToExpRector\Fixture;

function skipNamespacedFunction()
{
    // Custom namespaced pow function should be skipped
    return \Some\Custom\pow(2, 3);
}
