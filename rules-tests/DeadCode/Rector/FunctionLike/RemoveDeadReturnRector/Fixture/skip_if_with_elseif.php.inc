<?php

namespace Rector\Tests\DeadCode\Rector\FunctionLike\RemoveDeadReturnRector\Fixture;

final class SkipIfWithElseif
{
    public function run($value)
    {
        if ($value === 1) {
            return;
        } elseif ($value === 2) {
            echo 'test';
        }
    }
}
