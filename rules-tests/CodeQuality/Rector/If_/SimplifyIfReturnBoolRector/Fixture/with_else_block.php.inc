<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfReturnBoolRector\Fixture;

final class WithElseBlock
{
    public function run($value): bool
    {
        if ($value === 1) {
            return true;
        } else {
            echo 'not equal';
        }

        return false;
    }
}
