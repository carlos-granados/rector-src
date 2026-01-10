<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

final class SkipNoNativeReadonly
{
    /**
     * @readonly
     */
    private string $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }
}
