<?php

namespace Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Fixture;

use Rector\Tests\CodeQuality\Rector\FuncCall\InlineIsAInstanceOfRector\Source\SomeType;

final class SkipSpreadOperator
{
    public function run(object $object)
    {
        $args = [$object, SomeType::class];
        return is_a(...$args);
    }
}
