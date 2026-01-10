<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class SkipProtectedProperty
{
    protected int $unusedButProtected;

    public function __construct(int $value)
    {
        $this->unusedButProtected = $value;
    }
}
