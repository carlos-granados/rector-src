<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

readonly class RemovePropertyInReadonlyClass
{
    /**
     * @readonly
     */
    private string $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

readonly class RemovePropertyInReadonlyClass
{
    private string $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }
}

?>
