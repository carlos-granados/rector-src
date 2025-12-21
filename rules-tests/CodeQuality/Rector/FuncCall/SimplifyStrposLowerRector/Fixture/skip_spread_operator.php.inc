<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\SimplifyStrposLowerRector\Fixture;

final class SkipSpreadOperator
{
    public function run()
    {
        $args = [strtolower('hey'), 'find-me'];
        strpos(...$args);
    }
}
