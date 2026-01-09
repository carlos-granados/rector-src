<?php

namespace Rector\Tests\DeadCode\Rector\If_\ReduceAlwaysFalseIfOrRector\Fixture;

trait TraitWithInstanceof
{
    public function run(\stdClass $object)
    {
        // Traits skip instanceof checks because the trait context is uncertain
        if (! $object instanceof \stdClass || $object->prop > 50) {
            return 'yes';
        }

        return 'no';
    }
}
