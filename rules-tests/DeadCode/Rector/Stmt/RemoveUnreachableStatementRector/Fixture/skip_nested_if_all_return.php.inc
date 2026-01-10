<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

// Note: This is a limitation - nested if statements that all return
// are not detected as always terminating
class SkipNestedIfAllReturn
{
    public function run(bool $a, bool $b)
    {
        if ($a) {
            if ($b) {
                return 1;
            } else {
                return 2;
            }
        } else {
            return 3;
        }

        $keepMe = 10;
    }
}
