<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

abstract class AbstractBase
{
    abstract public function handle(): void;
}

class ConcreteClass extends AbstractBase
{
    public function handle(): void
    {
        // Can't call parent::handle() on abstract method
    }
}
