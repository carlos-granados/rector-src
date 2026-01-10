<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class SkipElseifBranch
{
    public function run(array $result)
    {
        if ($result === []) {
            return [];
        } elseif ($result === [1]) {
            return [1];
        }

        return $result;
    }
}
