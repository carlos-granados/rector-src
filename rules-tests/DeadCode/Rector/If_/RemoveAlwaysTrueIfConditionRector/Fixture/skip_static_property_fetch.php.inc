<?php

namespace Rector\Tests\DeadCode\Rector\If_\RemoveAlwaysTrueIfConditionRector\Fixture;

class SkipStaticPropertyFetch
{
    private static bool $flag = true;

    public function run()
    {
        if (self::$flag) {
            return 'yes';
        }

        return 'no';
    }
}
