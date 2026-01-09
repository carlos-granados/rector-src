<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

class SkipArrayAccess
{
    public function run(array $data)
    {
        if (! is_int($data['number']) || $data['number'] > 50) {
            return 'yes';
        }

        return 'no';
    }
}
