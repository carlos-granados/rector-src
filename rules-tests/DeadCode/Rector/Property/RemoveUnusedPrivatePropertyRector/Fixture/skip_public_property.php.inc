<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class SkipPublicProperty
{
    public int $unusedButPublic;

    public function __construct(int $value)
    {
        $this->unusedButPublic = $value;
    }
}
