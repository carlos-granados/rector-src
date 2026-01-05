<?php

declare(strict_types=1);

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveArgumentFromDefaultParentCallRector\Source;

class ParentWithBoolDefaults
{
    public function __construct(string $name, bool $active = false, mixed $data = null)
    {
    }
}
