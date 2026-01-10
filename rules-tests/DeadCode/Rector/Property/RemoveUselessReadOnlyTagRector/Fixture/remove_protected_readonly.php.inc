<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

final class RemoveProtectedReadonly
{
    /**
     * @readonly
     */
    protected readonly string $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

final class RemoveProtectedReadonly
{
    protected readonly string $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }
}

?>
