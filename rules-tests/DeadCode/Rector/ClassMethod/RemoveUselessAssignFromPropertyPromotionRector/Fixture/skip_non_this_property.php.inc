<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessAssignFromPropertyPromotionRector\Fixture;

class SkipNonThisProperty
{
    public function __construct(
        private \stdClass $promoted,
        \stdClass $other
    ) {
        $this->promoted = $promoted;
        $other->property = 'value';
    }
}

