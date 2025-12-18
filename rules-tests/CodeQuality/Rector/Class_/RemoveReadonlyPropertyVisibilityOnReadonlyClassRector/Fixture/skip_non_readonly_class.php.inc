<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\RemoveReadonlyPropertyVisibilityOnReadonlyClassRector\Fixture;

final class SkipNonReadonlyClass
{
    public function __construct(
        private readonly string $name
    ) {
    }
}
