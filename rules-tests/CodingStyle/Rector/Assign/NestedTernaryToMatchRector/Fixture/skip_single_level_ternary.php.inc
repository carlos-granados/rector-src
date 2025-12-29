<?php

namespace Rector\Tests\CodingStyle\Rector\Assign\NestedTernaryToMatchRector\Fixture;

final class SkipSingleLevelTernary
{
    public function run($value)
    {
        $result = $value > 10 ? 'greater than 10' : 'not greater';
    }
}
