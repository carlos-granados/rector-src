<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\TernaryImplodeToImplodeRector\Fixture;

class SkipSpreadOperator
{
    public function run(array $values)
    {
        $args = [',', $values];
        return $values === [] ? '' : implode(...$args);
    }
}
