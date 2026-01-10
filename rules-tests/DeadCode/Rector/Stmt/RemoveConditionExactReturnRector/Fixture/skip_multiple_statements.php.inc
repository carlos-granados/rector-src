<?php

namespace Rector\Tests\DeadCode\Rector\Stmt\RemoveConditionExactReturnRector\Fixture;

final class SkipMultipleStatements
{
    public function run(array $result)
    {
        if ($result === []) {
            doSomething();
            return [];
        }

        return $result;
    }
}
