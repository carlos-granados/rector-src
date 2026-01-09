<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\MethodCall\RemoveNullArgOnNullDefaultParamRector\Fixture;

function someFuncWithDefaultNulls(?string $a = null, ?string $b = null)
{
}

final class SkipSpreadOperator
{
    public function run()
    {
        $args = [null, null];
        someFuncWithDefaultNulls(...$args);
    }
}
