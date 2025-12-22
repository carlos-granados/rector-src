<?php

namespace Rector\Tests\CodeQuality\Rector\Identical\StrlenZeroToIdenticalEmptyStringRector\Fixture;

class SkipNamedArguments
{
    public function run(string $value)
    {
        // Named arguments should not be transformed
        $isEmpty = strlen(string: $value) === 0;
        $isNotEmpty = strlen(string: $value) !== 0;
    }
}
