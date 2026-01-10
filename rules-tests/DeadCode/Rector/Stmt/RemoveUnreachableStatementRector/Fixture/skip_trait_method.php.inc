<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveUnreachableStatementRector\Fixture;

trait SkipTraitMethod
{
    public function run()
    {
        $x = 1;
        return $x;
    }
}
