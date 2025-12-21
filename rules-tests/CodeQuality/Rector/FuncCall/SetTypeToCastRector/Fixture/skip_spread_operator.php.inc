<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SetTypeToCastRector\Fixture;

final class SkipSpreadOperator
{
    public function run($foo)
    {
        $args = [$foo, 'string'];
        settype(...$args);
    }
}
