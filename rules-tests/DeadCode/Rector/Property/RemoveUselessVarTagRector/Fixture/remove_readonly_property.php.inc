<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessVarTagRector\Fixture;

final class RemoveReadonlyProperty
{
    /**
     * @var string
     */
    public readonly string $name;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessVarTagRector\Fixture;

final class RemoveReadonlyProperty
{
    public readonly string $name;
}

?>
