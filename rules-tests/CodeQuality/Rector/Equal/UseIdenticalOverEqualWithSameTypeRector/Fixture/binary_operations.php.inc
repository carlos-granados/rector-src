<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

function binaryOperations(int $a, int $b, int $c)
{
    if ($a + $b == $c) {
        return true;
    }

    if ($a - $b != $c) {
        return false;
    }

    return true;
}

-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

function binaryOperations(int $a, int $b, int $c)
{
    if ($a + $b === $c) {
        return true;
    }

    if ($a - $b !== $c) {
        return false;
    }

    return true;
}
