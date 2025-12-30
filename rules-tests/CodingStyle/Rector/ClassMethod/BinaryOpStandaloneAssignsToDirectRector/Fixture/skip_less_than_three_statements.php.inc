<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\BinaryOpStandaloneAssignsToDirectRector\Fixture;

final class SkipLessThanThreeStatements
{
    public function run()
    {
        $first = 100;

        return $first;
    }
}
