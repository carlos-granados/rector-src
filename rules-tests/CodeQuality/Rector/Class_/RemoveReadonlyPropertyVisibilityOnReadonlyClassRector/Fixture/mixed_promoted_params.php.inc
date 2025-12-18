<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\RemoveReadonlyPropertyVisibilityOnReadonlyClassRector\Fixture;

final readonly class MixedPromotedParams
{
    public function __construct(
        private readonly string $name,
        public readonly int $age,
        protected readonly bool $active
    ) {
    }
}

?>
-----
<?php

namespace Rector\Tests\CodeQuality\Rector\Class_\RemoveReadonlyPropertyVisibilityOnReadonlyClassRector\Fixture;

final readonly class MixedPromotedParams
{
    public function __construct(
        private string $name,
        public int $age,
        protected bool $active
    ) {
    }
}

?>
