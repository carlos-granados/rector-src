<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class SkipNestedIfNotAllReturn
{
    public function run(bool $a, bool $b)
    {
        if ($a) {
            if ($b) {
                return 1;
            }
            // no else here - could fall through
        } else {
            return 3;
        }

        return 10;
    }
}
