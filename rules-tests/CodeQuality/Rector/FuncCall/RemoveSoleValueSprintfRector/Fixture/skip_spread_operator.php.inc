<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\RemoveSoleValueSprintfRector\Fixture;

final class SkipSpreadOperator
{
    public function run()
    {
        $args = ['%s', 'hello'];
        $value = sprintf(...$args);
    }
}
