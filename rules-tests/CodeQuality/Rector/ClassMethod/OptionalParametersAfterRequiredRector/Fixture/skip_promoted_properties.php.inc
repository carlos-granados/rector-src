<?php

namespace Rector\Tests\CodeQuality\Rector\ClassMethod\OptionalParametersAfterRequiredRector\Fixture;

class SkipPromotedProperties
{
    public function __construct(
        public string $name = 'default',
        public int $age = 0
    ) {
    }
}
