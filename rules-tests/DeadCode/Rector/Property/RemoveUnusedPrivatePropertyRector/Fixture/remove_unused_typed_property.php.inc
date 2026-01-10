<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class RemoveUnusedTypedProperty
{
    private int $unusedInt;
    private string $unusedString;

    public function __construct(int $unusedInt, string $unusedString)
    {
        $this->unusedInt = $unusedInt;
        $this->unusedString = $unusedString;
    }
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUnusedPrivatePropertyRector\Fixture;

class RemoveUnusedTypedProperty
{
    public function __construct(int $unusedInt, string $unusedString)
    {
    }
}

?>
