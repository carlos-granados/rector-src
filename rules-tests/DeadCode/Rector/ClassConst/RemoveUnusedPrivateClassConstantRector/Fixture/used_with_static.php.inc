<?php

namespace Rector\Tests\DeadCode\Rector\ClassConst\RemoveUnusedPrivateClassConstantRector\Fixture;

class UsedWithStatic
{
    private const SOME_CONST = 'value';

    public function run()
    {
        return static::SOME_CONST;
    }
}
