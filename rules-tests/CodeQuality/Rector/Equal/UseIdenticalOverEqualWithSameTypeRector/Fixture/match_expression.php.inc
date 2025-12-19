<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

function matchExpression(int $value)
{
    $result = match ($value) {
        1 => 'one',
        2 => 'two',
        default => 'other',
    };

    if ($result == 'one') {
        return true;
    }

    return false;
}

-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

function matchExpression(int $value)
{
    $result = match ($value) {
        1 => 'one',
        2 => 'two',
        default => 'other',
    };

    if ($result === 'one') {
        return true;
    }

    return false;
}
