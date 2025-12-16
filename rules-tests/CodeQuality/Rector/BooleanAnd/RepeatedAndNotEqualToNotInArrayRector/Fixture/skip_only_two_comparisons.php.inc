<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\Fixture;

final class SkipOnlyTwoComparisons
{
    public function demo($value): bool
    {
        // Only 2 comparisons, requires at least 3
        if ($value !== 'a' && $value !== 'b') {
            return true;
        }

        return false;
    }
}
