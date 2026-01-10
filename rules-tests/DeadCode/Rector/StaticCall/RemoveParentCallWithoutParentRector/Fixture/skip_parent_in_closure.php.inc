<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class ParentClass
{
    public function doSomething(): void
    {
    }
}

class SkipParentInClosure extends ParentClass
{
    public function run(): void
    {
        $closure = function () {
            parent::doSomething();
        };
    }
}
