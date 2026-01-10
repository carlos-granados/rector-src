<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessVarTagRector\Fixture;

final class SkipCallableType
{
    /**
     * @var callable(string): int
     */
    public $callback;
}
