<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\RemoveReadonlyPropertyVisibilityOnReadonlyClassRector\Fixture;

final readonly class MixedReadonlyNonReadonlyProperties
{
    private readonly string $name;
    public string $publicName;
    protected readonly int $age;
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\RemoveReadonlyPropertyVisibilityOnReadonlyClassRector\Fixture;

final readonly class MixedReadonlyNonReadonlyProperties
{
    private string $name;
    public string $publicName;
    protected int $age;
}

?>
