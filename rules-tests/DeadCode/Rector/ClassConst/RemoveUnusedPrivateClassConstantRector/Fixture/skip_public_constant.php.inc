<?php

namespace Rector\Tests\DeadCode\Rector\ClassConst\RemoveUnusedPrivateClassConstantRector\Fixture;

class SkipPublicConstant
{
    // Public constants should not be removed even if unused
    public const SOME_CONST = 'value';
    protected const ANOTHER_CONST = 'value';
}
