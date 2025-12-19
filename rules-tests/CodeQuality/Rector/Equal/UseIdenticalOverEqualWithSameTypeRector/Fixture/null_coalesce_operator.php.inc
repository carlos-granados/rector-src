<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

function nullCoalesceOperator(?int $value)
{
    $result = $value ?? 0;

    if ($result == 5) {
        return true;
    }

    return false;
}

-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Equal\UseIdenticalOverEqualWithSameTypeRector\Fixture;

function nullCoalesceOperator(?int $value)
{
    $result = $value ?? 0;

    if ($result === 5) {
        return true;
    }

    return false;
}
