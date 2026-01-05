<?php

namespace Rector\Tests\DeadCode\Rector\ClassConst\RemoveUnusedPrivateClassConstantRector\Fixture;

class UsedInArrayKey
{
    private const KEY = 'key';

    public function run()
    {
        return [self::KEY => 'value'];
    }
}
