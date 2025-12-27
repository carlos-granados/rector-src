<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfReturnBoolRector\Fixture;

final class SkipEmptyIf
{
    public function run($value): bool
    {
        if ($value === 1) {
        }

        return false;
    }
}
