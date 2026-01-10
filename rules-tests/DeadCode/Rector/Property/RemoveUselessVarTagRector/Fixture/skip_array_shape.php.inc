<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessVarTagRector\Fixture;

final class SkipArrayShape
{
    /**
     * @var array{name: string, age: int}
     */
    public array $data;
}
