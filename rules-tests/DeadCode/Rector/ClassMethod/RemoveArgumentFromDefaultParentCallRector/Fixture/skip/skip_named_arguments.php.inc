<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Fixture\Skip;

use Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Source\SomeParentClass;

final class SkipNamedArguments extends SomeParentClass
{
    public function __construct(string $differentParam)
    {
        parent::__construct(params: []);
    }
}
