<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\RemoveReadonlyPropertyVisibilityOnReadonlyClassRector\Fixture;

abstract readonly class AbstractReadonlyClass
{
    public function __construct(
        private readonly string $name
    ) {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\RemoveReadonlyPropertyVisibilityOnReadonlyClassRector\Fixture;

abstract readonly class AbstractReadonlyClass
{
    public function __construct(
        private string $name
    ) {
    }
}

?>
