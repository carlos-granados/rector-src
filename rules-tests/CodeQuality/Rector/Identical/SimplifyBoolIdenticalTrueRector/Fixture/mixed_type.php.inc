<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\SimplifyBoolIdenticalTrueRector\Fixture;

final class MixedType
{
    public function run(mixed $value)
    {
        // Mixed type should not be transformed
        if ($value === true) {
            return 'yes';
        }

        if ($value !== false) {
            return 'maybe';
        }
    }
}
