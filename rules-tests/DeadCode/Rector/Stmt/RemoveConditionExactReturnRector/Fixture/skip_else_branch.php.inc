<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class SkipElseBranch
{
    public function run(array $result)
    {
        if ($result === []) {
            return [];
        } else {
            doSomething();
        }

        return $result;
    }
}
