<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class SkipUsedInMatch
{
    private int $type = 1;

    public function getLabel(): string
    {
        return match ($this->type) {
            1 => 'one',
            2 => 'two',
            default => 'other',
        };
    }
}
