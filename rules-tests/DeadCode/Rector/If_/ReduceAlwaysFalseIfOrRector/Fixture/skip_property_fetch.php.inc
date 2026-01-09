<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class SkipPropertyFetch
{
    private int $number;

    public function run()
    {
        if (! is_int($this->number) || $this->number > 50) {
            return 'yes';
        }

        return 'no';
    }
}
