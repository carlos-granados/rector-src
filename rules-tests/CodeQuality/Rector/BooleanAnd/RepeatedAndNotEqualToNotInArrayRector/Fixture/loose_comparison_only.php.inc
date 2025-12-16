<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\Fixture;

final class LooseComparisonOnly
{
    public function demo($value): bool
    {
        // Only != (loose comparison)
        if ($value != 'a' && $value != 'b' && $value != 'c') {
            return true;
        }

        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\Fixture;

final class LooseComparisonOnly
{
    public function demo($value): bool
    {
        // Only != (loose comparison)
        if (!in_array($value, ['a', 'b', 'c'])) {
            return true;
        }

        return false;
    }
}

?>
