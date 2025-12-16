<?php

namespace Rector\Tests\CodeQuality\Rector\BooleanAnd\RepeatedAndNotEqualToNotInArrayRector\Fixture;

final class SkipDifferentVariables
{
    public function demo($value1, $value2, $value3): bool
    {
        // Different variables, should not be converted
        if ($value1 !== 'a' && $value2 !== 'b' && $value3 !== 'c') {
            return true;
        }

        return false;
    }
}
