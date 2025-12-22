<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyBoolIdenticalTrueRector\Fixture;

final class SkipNullableBool
{
    public function run(?bool $value)
    {
        // Nullable bool should not be transformed as it could be null
        if ($value === true) {
            return 'yes';
        }

        if ($value !== false) {
            return 'maybe';
        }
    }
}
