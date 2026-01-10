<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class SkipUsedInTernary
{
    private ?string $name = null;

    public function getName(): string
    {
        return $this->name ?? 'default';
    }
}
