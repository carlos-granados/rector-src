<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\StrlenZeroToIdenticalEmptyStringRector\Fixture;

class SkipSpreadOperator
{
    public function run(array $args)
    {
        // Spread operator should not be transformed
        $isEmpty = strlen(...$args) === 0;
        $isNotEmpty = strlen(...$args) !== 0;
    }
}
