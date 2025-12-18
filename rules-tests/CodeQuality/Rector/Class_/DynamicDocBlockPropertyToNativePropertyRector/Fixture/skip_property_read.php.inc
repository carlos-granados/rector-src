<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\DynamicDocBlockPropertyToNativePropertyRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Class_\DynamicDocBlockPropertyToNativePropertyRector\Source\SomeDependency;

/**
 * @property-read SomeDependency $someDependency
 */
#[\AllowDynamicProperties]
final class SkipPropertyRead
{
    public function run(): void
    {
        $this->someDependency = new SomeDependency();
    }
}
