<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\Fixture;

final class MixedStrictAndLoose
{
    public function demo($value): bool
    {
        // Mix of !== and !=, should use non-strict in_array
        if ($value !== 'a' && $value != 'b' && $value !== 'c') {
            return true;
        }

        return false;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\Fixture;

final class MixedStrictAndLoose
{
    public function demo($value): bool
    {
        // Mix of !== and !=, should use non-strict in_array
        if (!in_array($value, ['a', 'b', 'c'])) {
            return true;
        }

        return false;
    }
}

?>
