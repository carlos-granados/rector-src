<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\InlineConstructorDefaultToPropertyRector\Fixture;

final class SkipPromotedProperty
{
    public function __construct(
        private string $name = 'John'
    ) {
    }
}
