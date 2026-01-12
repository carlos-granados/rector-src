<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

final class SkipComparisonNotInstanceof
{
    public function run($value)
    {
        return ! ($value === 50) ? 'not fifty' : 'fifty';
    }
}
