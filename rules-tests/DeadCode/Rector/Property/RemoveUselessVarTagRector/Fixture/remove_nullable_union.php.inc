<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessVarTagRector\Fixture;

final class RemoveNullableUnion
{
    /**
     * @var string|null
     */
    public ?string $name;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessVarTagRector\Fixture;

final class RemoveNullableUnion
{
    public ?string $name;
}

?>
