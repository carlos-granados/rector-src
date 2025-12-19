<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

function skipArrayDimFetch(array $items)
{
    if ($items[0] == 5) {
        return true;
    }

    if (5 == $items[0]) {
        return true;
    }

    return false;
}
