<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\DynamicDocBlockPropertyToNativePropertyRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Class_\DynamicDocBlockPropertyToNativePropertyRector\Source\SomeDependency;

/**
 * @property-write SomeDependency $someDependency
 */
#[\AllowDynamicProperties]
final class SkipPropertyWrite
{
    public function run(): void
    {
        $this->someDependency = new SomeDependency();
    }
}
