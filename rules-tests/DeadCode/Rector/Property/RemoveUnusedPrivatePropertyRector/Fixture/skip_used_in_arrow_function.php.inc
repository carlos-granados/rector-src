<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class SkipUsedInArrowFunction
{
    private int $multiplier = 2;

    public function getMultiplier(): callable
    {
        return fn(int $value) => $value * $this->multiplier;
    }
}
