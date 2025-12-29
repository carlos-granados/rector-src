<?php

namespace Rector\Tests\CodeQuality\Rector\Ternary\TernaryImplodeToImplodeRector\Fixture;

class SkipNamedArguments
{
    public function run(array $values)
    {
        return $values === [] ? '' : implode(separator: ',', array: $values);
    }
}
