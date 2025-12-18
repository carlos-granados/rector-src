<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\DynamicDocBlockPropertyToNativePropertyRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Class_\DynamicDocBlockPropertyToNativePropertyRector\Source\SomeDependency;

/**
 * @property SomeDependency $first
 * @property SomeDependency $second
 * @property int $counter
 */
#[\AllowDynamicProperties]
final class MultipleProperties
{
    public function run(): void
    {
        $this->first = new SomeDependency();
        $this->second = new SomeDependency();
        $this->counter = 0;
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\DynamicDocBlockPropertyToNativePropertyRector\Fixture;

use Rector\Tests\CodeQuality\Rector\Class_\DynamicDocBlockPropertyToNativePropertyRector\Source\SomeDependency;

final class MultipleProperties
{
    private ?\Rector\Tests\CodeQuality\Rector\Class_\DynamicDocBlockPropertyToNativePropertyRector\Source\SomeDependency $first;
    private ?\Rector\Tests\CodeQuality\Rector\Class_\DynamicDocBlockPropertyToNativePropertyRector\Source\SomeDependency $second;
    private ?int $counter;
    public function run(): void
    {
        $this->first = new SomeDependency();
        $this->second = new SomeDependency();
        $this->counter = 0;
    }
}

?>
