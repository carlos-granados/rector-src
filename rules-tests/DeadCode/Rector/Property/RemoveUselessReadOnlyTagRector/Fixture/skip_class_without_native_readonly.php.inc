<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

/**
 * @readonly
 */
final class SkipClassWithoutNativeReadonly
{
    public function __construct(
        private string $name
    )
    {
    }
}
