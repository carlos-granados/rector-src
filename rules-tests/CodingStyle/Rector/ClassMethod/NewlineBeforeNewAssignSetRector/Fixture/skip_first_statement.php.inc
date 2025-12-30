<?php

namespace Rector\Tests\CodingStyle\Rector\ClassMethod\NewlineBeforeNewAssignSetRector\Fixture;

final class SkipFirstStatement
{
    public function run()
    {
        $value = new Value;
    }
}
