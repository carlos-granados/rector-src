<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessAssignFromPropertyPromotionRector\Fixture;

class SkipMixedPromotedAndNormal
{
    private \stdClass $normalProp;

    public function __construct(
        private \stdClass $promoted,
        \stdClass $normal
    ) {
        $this->promoted = $promoted;
        $this->normalProp = $normal;
    }
}

