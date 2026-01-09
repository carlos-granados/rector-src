<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class SkipStaticProperty
{
    private static int $count;

    public function run()
    {
        if (! is_int(self::$count) || self::$count > 50) {
            return 'yes';
        }

        return 'no';
    }
}
