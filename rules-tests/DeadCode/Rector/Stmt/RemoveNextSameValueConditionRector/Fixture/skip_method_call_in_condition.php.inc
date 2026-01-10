<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveNextSameValueConditionRector\Fixture;

final class SkipMethodCallInCondition
{
    public function run()
    {
        if ($this->getValue() === 0) {
            $x = 1;
        }

        if ($this->getValue() === 0) {
            return $x;
        }
    }

    public function getValue(): int
    {
        return rand(0, 10);
    }
}
