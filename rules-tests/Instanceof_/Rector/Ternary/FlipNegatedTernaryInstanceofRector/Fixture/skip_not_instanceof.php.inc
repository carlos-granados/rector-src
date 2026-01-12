<?php

namespace Rector\Tests\Instanceof_\Rector\Ternary\FlipNegatedTernaryInstanceofRector\Fixture;

final class SkipNotInstanceof
{
    public function run($value)
    {
        echo ! $value ? null : $value;
    }
}
