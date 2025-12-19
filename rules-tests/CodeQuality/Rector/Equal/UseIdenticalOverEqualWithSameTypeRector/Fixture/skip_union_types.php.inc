<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

function skipUnionTypes(int|string $value)
{
    if ($value == 5) {
        return true;
    }

    if ($value == 'test') {
        return false;
    }

    return true;
}
