<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class SkipNotIdentical
{
    public function run(array $result)
    {
        if ($result !== []) {
            return [];
        }

        return $result;
    }
}
