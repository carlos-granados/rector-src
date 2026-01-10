<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

interface SomeInterface
{
    public function process(): void;
}

abstract class AbstractProcessor implements SomeInterface
{
    public function process(): void
    {
    }
}

class SkipParentWithInterface extends AbstractProcessor
{
    public function process(): void
    {
        parent::process();
    }
}
