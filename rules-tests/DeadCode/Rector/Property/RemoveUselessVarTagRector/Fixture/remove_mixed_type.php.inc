<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessVarTagRector\Fixture;

final class RemoveMixedType
{
    /**
     * @var mixed
     */
    public mixed $data;
}

?>
-----
<?php

namespace Rector\Tests\DeadCode\Rector\Property\RemoveUselessVarTagRector\Fixture;

final class RemoveMixedType
{
    public mixed $data;
}

?>
