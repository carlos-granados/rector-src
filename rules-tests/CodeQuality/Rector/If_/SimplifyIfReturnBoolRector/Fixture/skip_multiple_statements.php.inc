<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfReturnBoolRector\Fixture;

final class SkipMultipleStatements
{
    public function run($value): bool
    {
        if ($value === 1) {
            echo 'debug';
            return true;
        }

        return false;
    }
}
