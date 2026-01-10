<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

class SkipClosureInside
{
    public function run()
    {
        $fn = function () {
            return 5;
        };

        return $fn();
    }
}
