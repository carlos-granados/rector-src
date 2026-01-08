<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

final class SkipIfMultipleStmts
{
    public function run($value)
    {
        if ($value) {
            echo 'before';
            return;
        }
    }
}
