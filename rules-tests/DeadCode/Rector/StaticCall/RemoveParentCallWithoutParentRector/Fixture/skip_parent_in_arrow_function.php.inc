<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class ParentClassArrow
{
    public function getValue(): int
    {
        return 1;
    }
}

class SkipParentInArrowFunction extends ParentClassArrow
{
    public function run(): int
    {
        $fn = fn() => parent::getValue();
        return $fn();
    }
}
