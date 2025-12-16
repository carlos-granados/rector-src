<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\Fixture;

final class ReversedOrder
{
    public function demo($value): bool
    {
        // Value on left side, variable on right side
        if ('a' !== $value && 'b' !== $value && 'c' !== $value) {
            return true;
        }

        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\Fixture;

final class ReversedOrder
{
    public function demo($value): bool
    {
        // Value on left side, variable on right side
        if (!in_array($value, ['a', 'b', 'c'], true)) {
            return true;
        }

        return false;
    }
}

?>
