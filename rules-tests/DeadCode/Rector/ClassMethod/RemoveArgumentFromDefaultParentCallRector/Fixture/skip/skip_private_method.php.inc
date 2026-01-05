<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Fixture\Skip;

use Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Source\SomeParentClass;

final class SkipPrivateMethod extends SomeParentClass
{
    private function doSomething()
    {
        parent::__construct([]);
    }
}
