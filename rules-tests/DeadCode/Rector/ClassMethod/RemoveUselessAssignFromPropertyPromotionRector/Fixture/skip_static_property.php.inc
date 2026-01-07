<?php

namespace Rector\Tests\DeadCode\Rector\ClassMethod\RemoveUselessAssignFromPropertyPromotionRector\Fixture;

class SkipStaticProperty
{
    private static \stdClass $staticProp;

    public function __construct(
        private \stdClass $promoted,
        \stdClass $value
    ) {
        $this->promoted = $promoted;
        self::$staticProp = $value;
    }
}

