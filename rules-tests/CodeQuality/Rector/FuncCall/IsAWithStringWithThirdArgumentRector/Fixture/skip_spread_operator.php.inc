<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\IsAWithStringWithThirdArgumentRector\Fixture;

final class SkipSpreadOperator
{
    public function run(string $value)
    {
        $args = [$value, 'stdClass'];
        return is_a(...$args);
    }
}
