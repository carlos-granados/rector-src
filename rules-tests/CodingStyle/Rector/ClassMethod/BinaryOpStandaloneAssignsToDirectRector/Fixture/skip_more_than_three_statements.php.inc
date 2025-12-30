<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\BinaryOpStandaloneAssignsToDirectRector\Fixture;

final class SkipMoreThanThreeStatements
{
    public function run()
    {
        $first = 100;
        $second = 200;
        $unused = 300;

        return $first <=> $second;
    }
}
