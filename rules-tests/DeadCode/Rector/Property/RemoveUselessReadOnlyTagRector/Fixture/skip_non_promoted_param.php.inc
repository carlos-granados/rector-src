<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

final class SkipNonPromotedParam
{
    /**
     * @readonly
     */
    public function doSomething(string $name): void
    {
    }
}
