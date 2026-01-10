<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

final class RemoveMultipleProperties
{
    /**
     * @readonly
     */
    private readonly string $name;

    /**
     * @readonly
     */
    private readonly int $age;

    public function __construct(string $name, int $age)
    {
        $this->name = $name;
        $this->age = $age;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

final class RemoveMultipleProperties
{
    private readonly string $name;

    private readonly int $age;

    public function __construct(string $name, int $age)
    {
        $this->name = $name;
        $this->age = $age;
    }
}

?>
