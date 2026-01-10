<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class SkipConstructorPropertyPromotion
{
    public function __construct(
        private int $id,
        private string $name
    ) {
    }
}
