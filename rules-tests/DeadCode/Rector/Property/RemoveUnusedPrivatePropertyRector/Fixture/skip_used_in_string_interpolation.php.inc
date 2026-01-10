<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class SkipUsedInStringInterpolation
{
    private string $name = 'world';

    public function greet(): string
    {
        return "Hello, {$this->name}!";
    }
}
