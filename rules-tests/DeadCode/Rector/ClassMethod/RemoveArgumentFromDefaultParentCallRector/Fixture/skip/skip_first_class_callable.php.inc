<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Fixture\Skip;

use Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Source\SomeParentClass;

final class SkipFirstClassCallable extends SomeParentClass
{
    public function getCallable()
    {
        return parent::__construct(...);
    }
}
