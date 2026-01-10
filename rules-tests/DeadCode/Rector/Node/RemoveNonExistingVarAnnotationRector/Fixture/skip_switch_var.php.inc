<?php

namespace Rector\Tests\DeadCode\Rector\Node\RemoveNonExistingVarAnnotationRector\Fixture;

class SkipSwitchVar
{
    public function run(int $type)
    {
        /** @var int $type */
        switch ($type) {
            case 1:
                return 'one';
            default:
                return 'other';
        }
    }
}
