<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

final class SkipIfWithElse
{
    public function run($value)
    {
        if ($value) {
            return;
        } else {
            echo 'test';
        }
    }
}
