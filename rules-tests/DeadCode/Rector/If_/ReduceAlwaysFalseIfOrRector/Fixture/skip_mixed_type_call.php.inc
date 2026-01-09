<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class SkipMixedTypeCall
{
    public function run($mixed)
    {
        if (! is_int($mixed->getValue()) || $mixed->getValue() > 50) {
            return 'yes';
        }

        return 'no';
    }
}
