<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

final class RemoveWithOtherTags
{
    /**
     * @var string
     * @readonly
     * @deprecated
     */
    private readonly string $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessReadOnlyTagRector\Fixture;

final class RemoveWithOtherTags
{
    /**
     * @var string
     * @deprecated
     */
    private readonly string $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }
}

?>
